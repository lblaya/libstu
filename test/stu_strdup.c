#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdlib.h>
#include "stu.h"

Test(stu_strdup, normal_dup) {
    char *string = stu_strdup("incroyableA7");
    string[11] = '8';
    cr_assert(eq(str, string, "incroyableA8"));
    free(string);
}

Test(stu_strdup, anormal_dup) {
    char *str = stu_strdup("schgoat");
    str[3] = 'l';
    cr_assert(ne(str, str, ""));
    free(str);
}
