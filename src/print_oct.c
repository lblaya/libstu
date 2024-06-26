#include <stdarg.h>
#include <unistd.h>
#include "../include/stu.h"

int print_oct(int fd, va_list args)
{
    long num;

    num = va_arg(args, int);
    return print_base(fd, num, "01234567");
}
