/*
 * E89 Pedagogical & Technical Lab
 * project:     d3
 * created on:  2024-02-07 - 10:31 +0100
 * 1st author:  louis.blaya - louis.blaya
 * description: memcpy.c
 */

void *stu_memcpy(void *dest, const void *src, unsigned int n)
{
    char *buffer_dest;
    char *buffer_src;
    unsigned int cnt;

    buffer_dest = (char *) dest;
    buffer_src = (char *) src;
    cnt = 0;
    while (cnt < n) {
        buffer_dest[cnt] = buffer_src[cnt];
        cnt = cnt + 1;
    }
    buffer_dest = (void *) dest;
    dest = buffer_dest;
    return dest;
}
