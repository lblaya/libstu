#include <stdio.h>
#include <unistd.h>
#include "stu.h"

int stu_puts(char *var)
{
    unsigned int length;
    int a;

    length = stu_strlen(var);
    a = write(1, var, length);
    write(1, "\n", 1);
    if (a == -1) {
        return -1;
    } else {
        return a;
    }
}
