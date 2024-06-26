#include <stddef.h>
#include "stu.h"

int has_opt(int argc, char **argv, char par)
{
    int count;
    char *averse;

    count = 0;
    while (count < argc) {
        averse = argv[count];
        if (averse[0] == '-') {
            if (stu_strchr(averse, par) != NULL) {
                return 1;
            }
        }
        count = count + 1;
    }
    return 0;
}
