#include <stdarg.h>
#include <unistd.h>
#include "../include/stu.h"

int print_percent(int fd, va_list args)
{
    (void) args;
    return write(fd, "%", 1);
}
