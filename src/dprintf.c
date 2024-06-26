#include <stdarg.h>
#include <unistd.h>
#include "../include/stu.h"

const struct dprint_table_row DPRINT_TABLE[] = {
    {'s', print_str},
    {'c', print_char},
    {'d', print_int},
    {'x', print_hexa},
    {'b', print_bin},
    {'o', print_oct},
    {'p', print_ptr},
    {'%', print_percent},
    {'\0', print_percent},
};

const unsigned int DPRINT_TABLE_LEN =
    sizeof(DPRINT_TABLE) / sizeof(struct dprint_table_row);

static int comb_check(char to_check)
{
    unsigned int j;

    j = 0;
    while (j < DPRINT_TABLE_LEN) {
        if (to_check == DPRINT_TABLE[j].comb) {
            return j;
        }
        j += 1;
    }
    return -1;
}

static int print_comb(int j, const char *pattern, int fd, va_list args)
{
    if (j == -1) {
        return 0;
    }
    if (pattern[0] == '+' && pattern[1] == 'd') {
        return print_int_sign(fd, args);
    }
    return DPRINT_TABLE[j].fptr(fd, args);
}

int stu_dprintf(int fd, const char *pattern, ...)
{
    unsigned int i;
    unsigned int bytes;
    va_list args;

    i = 0;
    bytes = 0;
    va_start(args, pattern);
    while (pattern[i] != '\0') {
        if (pattern[i] == '%') {
            i += 1;
            while (pattern[i] != '\0' && comb_check(pattern[i]) == -1) {
                i += 1;
            }
            if (comb_check(pattern[i]) != -1) {
                bytes += print_comb(comb_check(pattern[i]),
                                    pattern + i - 1, fd, args);
            }
        } else {
            bytes += write(fd, &pattern[i], 1);
        }
        i += 1;
    }
    va_end(args);
    return bytes;
}
