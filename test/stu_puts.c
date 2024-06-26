#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(stu_puts, a_normal) {
    cr_assert(eq(i32, stu_puts("helloooooo"), 10));
}

Test(stu_puts, empty) {
    cr_assert(eq(i32, stu_puts(""), 0));
}
