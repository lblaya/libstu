#include <stdarg.h>
#include <unistd.h>
#include "../include/stu.h"

int print_char(int fd, va_list args)
{
    char c;

    c = (char) va_arg(args, int);
    return write(fd, &c, 1);
}
