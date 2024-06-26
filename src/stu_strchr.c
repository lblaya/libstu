#include <stddef.h>

char *stu_strchr(const char *first, char sec)
{
    int cnt;

    cnt = 0;
    while (first[cnt] != '\0') {
        if (first[cnt] == sec) {
            return (char *) &first[cnt];
        }
        cnt = cnt + 1;
    }
    return NULL;
}
