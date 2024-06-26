/*
 * E89 Pedagogical & Technical Lab
 * project:     d3
 * created on:  2024-02-07 - 16:57 +0100
 * 1st author:  louis.blaya - louis.blaya
 * description: memmove.c
 */

void *stu_memmove(void *dest, const void *src, unsigned int n)
{
    char *buffer_dest;
    char *buffer_src;
    unsigned int cnt;
    unsigned int right_cnt;

    buffer_dest = (char *) dest;
    buffer_src = (char *) src;
    cnt = 0;
    right_cnt = n - 1;
    if (dest < src) {
        while (cnt < n) {
            buffer_dest[cnt] = buffer_src[cnt];
            cnt = cnt + 1;
        }
    } else if (dest > src) {
        while (right_cnt > 0) {
            buffer_dest[right_cnt] = buffer_src[right_cnt];
            right_cnt = right_cnt - 1;
        }
        buffer_dest[0] = buffer_src[0];
    }
    buffer_dest = (void *) dest;
    dest = buffer_dest;
    return dest;
}
