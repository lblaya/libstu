#include <stddef.h>
#include "stu.h"

static char *argvalue_or_null(char *arg)
{
    if (arg != NULL && arg[0] != '-') {
        return arg;
    } else {
        return NULL;
    }
}

char *has_opt_value(int argc, char **argv, char par)
{
    int count;
    char *averse;
    char *value;
    char *chr;

    count = 0;
    averse = argv[count];
    chr = stu_strchr(averse, par);
    while (count + 1 < argc) {
        if (averse[0] == '-') {
            chr = stu_strchr(averse, par);
            if (chr != NULL && chr[1] == '\0') {
                value = argvalue_or_null(argv[count + 1]);
                return value;
            }
        }
        count = count + 1;
        averse = argv[count];
    }
    return 0;
}
