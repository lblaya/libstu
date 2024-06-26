#include <stdarg.h>
#include <unistd.h>
#include "../include/stu.h"

int print_ptr(int fd, va_list args)
{
    long num;

    num = va_arg(args, long);
    if (num == 0) {
        return write(fd, "(null)", 6);
    }
    return write(fd, "0x", 2) + print_base(fd, num, "0123456789abcdef");
}
