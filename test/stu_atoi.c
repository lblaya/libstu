#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_atoi, normals) {
    cr_assert(eq(i32, stu_atoi("1456"), 1456));
    cr_assert(eq(i32, stu_atoi("9703dana"), 9703));
}

Test(stu_atoi, negatives) {
    cr_assert(eq(i32, stu_atoi("-123"), -123));
}

Test(stu_atoi, null_zero) {
    cr_assert(eq(i32, stu_atoi("abc123232"), 0));
}

Test(stu_atoi, null_empty) {
    cr_assert(eq(i32, stu_atoi(""), 0));
}
