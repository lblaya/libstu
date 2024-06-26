#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "stu.h"

Test(print_base10, normal_1) {
    cr_assert(eq(i32, print_base10(2003), 4));
    cr_assert(eq(i32, print_base10(1997), 4));
}

Test(print_base10, not_equal) {
    cr_assert(ne(i32, print_base10(25), 1));
    cr_assert(ne(i32, print_base10(0), 2));
}

