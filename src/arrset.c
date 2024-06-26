/*
 * E89 Pedagogical & Technical Lab
 * project:     d3
 * created on:  2024-02-07 - 14:34 +0100
 * 1st author:  louis.blaya - louis.blaya
 * description: arrset.c
 */

#include "stu.h"
#include <stddef.h>

void *arrset(void *array,
             const void *elem,
             unsigned int elem_size,
             unsigned int n)
{
    unsigned int cnt;
    char *buffer;

    cnt = 0;
    buffer = (char *) array;
    while (cnt < n * elem_size) {
        stu_memcpy(buffer + cnt, elem, elem_size);
        cnt = cnt + elem_size;
    }
    array = buffer;
    return array;
}
