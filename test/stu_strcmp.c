#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_strcmp, normal_strcmp) {
    cr_assert(eq(i32, stu_strcmp("danadana", "danadana"), 0));
    cr_assert(eq(i32, stu_strcmp("ild", "ild"), 0));
    cr_assert(eq(i32, stu_strcmp("", ""), 0));
}

Test(stu_strcmp, diff_str) {
    cr_assert(eq(i32, stu_strcmp("salut", "sale"), -1));
    cr_assert(eq(i32, stu_strcmp("pas egale", "pas egaled"), -1));
    cr_assert(eq(i32, stu_strcmp("", "sch"), -1));
}
