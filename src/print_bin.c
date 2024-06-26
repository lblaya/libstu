#include <stdarg.h>
#include <unistd.h>
#include "../include/stu.h"

int print_bin(int fd, va_list args)
{
    long num;

    num = va_arg(args, long);
    return print_base(fd, num, "01");
}
