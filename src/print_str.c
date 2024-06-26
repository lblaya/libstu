#include <stdarg.h>
#include <unistd.h>
#include "stu.h"
#include "../include/stu.h"

int print_str(int fd, va_list args)
{
    char *str;

    str = va_arg(args, char *);
    return write(fd, str, stu_strlen(str));
}
