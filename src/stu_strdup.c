#include <stdlib.h>
#include <stddef.h>
#include "stu.h"

char *stu_strdup(const char *chaine)
{
    char *tabl;
    int cnt;

    cnt = 0;
    tabl = malloc(sizeof(char) * (stu_strlen(chaine) + 1));
    if (tabl != NULL) {
        while (chaine[cnt] != '\0') {
            tabl[cnt] = chaine[cnt];
            cnt = cnt + 1;
        }
        tabl[cnt] = '\0';
    }
    return tabl;
}
