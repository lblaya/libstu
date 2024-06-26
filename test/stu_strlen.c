#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_strlen, strlen_normal) {
    cr_assert(eq(stu_strlen("hello"), 5));
    cr_assert(eq(stu_strlen("abcdef"), 6));
}

Test(stu_strlen, empty) {
    cr_assert(eq(stu_strlen(""), 0));
}
