#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_strchr, normal_find) {
    char *str = "solides";
    char target = 'o';
    cr_assert(eq(ptr, stu_strchr(str, target), &str[1]));
}

Test(stu_strchr, not_found) {
    char *str = "solides";
    char target = 'a';
    cr_assert(eq(ptr, stu_strchr(str, target), NULL));
}

Test(stu_strchr, not_good_index) {
    char *str = "solides";
    char target = 'l';
    cr_assert(ne(ptr, stu_strchr(str, target), &str[3]));
}
