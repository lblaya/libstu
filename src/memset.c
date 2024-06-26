/*
 * E89 Pedagogical & Technical Lab
 * project:     d3
 * created on:  2024-02-06 - 15:44 +0100
 * 1st author:  louis.blaya - louis.blaya
 * description: memset.c
 */

#include <stdlib.h>

void *stu_memset(void *ptr, char byte, unsigned int n)
{
    unsigned int cnt;
    char *str;

    cnt = 0;
    str = (char *) ptr;
    while (cnt < n) {
        *(str + cnt) = byte;
        cnt = cnt + 1;
    }
    str = (void *) str;
    return str;
}
