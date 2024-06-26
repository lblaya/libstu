#include <stdarg.h>
#include <unistd.h>
#include "../include/stu.h"

int print_int_sign(int fd, va_list args)
{
    long num;

    num = va_arg(args, int);
    if (num >= 0) {
        return write(1, "+", 1) + print_base(fd, num, "0123456789");
    }
    return print_base(fd, num, "0123456789");
}
