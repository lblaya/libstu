#include <stdlib.h>
#include <unistd.h>
#include "stu.h"
#include "../include/stu.h"

static void tc_putchar(int fd, char c)
{
    write(fd, &c, 1);
}

static int base_len(const char *base)
{
    int total;

    total = 0;
    while (base[total] != '\0') {
        total = total + 1;
    }
    return total;
}

static int nb_base_len(long nb, const char *base)
{
    int length;
    int value_base_len;

    length = 1;
    value_base_len = base_len(base);
    while (nb % value_base_len != nb) {
        nb = nb / value_base_len;
        length = length + 1;
    }
    return length;
}

static int nb_base_get_digit(const char *base, long nb, int index)
{
    long res;
    int value_base_len;

    res = nb;
    value_base_len = base_len(base);
    while (index != 0) {
        res = res / value_base_len;
        index = index - 1;
    }
    res = res % value_base_len;
    return res;
}

int print_base(int fd, long nb, const char *base)
{
    int cnt;
    int val_base_len;

    if (nb < 0) {
        write(fd, "-", 1);
        nb = nb * -1;
    }

    val_base_len = nb_base_len(nb, base);
    cnt = val_base_len - 1;

    if (nb == 0) {
        write(fd, "0", 1);
    } else {
        while (cnt >= 0) {
            tc_putchar(fd, base[nb_base_get_digit(base, nb, cnt)]);
            cnt = cnt - 1;
        }
    }
    return nb_base_len(nb, base);
}
