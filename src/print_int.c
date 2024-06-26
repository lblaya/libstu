#include <stdarg.h>
#include <unistd.h>
#include "../include/stu.h"

int print_int(int fd, va_list args)
{
    long num;

    num = va_arg(args, int);
    return print_base(fd, num, "0123456789");
}
