#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdlib.h>
#include "stu.h"

Test(has_opt, found_opt) {
    char **av;
    int ac;

    ac = 3;
    av = malloc(sizeof(char *) * 3);
    av[0] = "unit_test.out";
    av[1] = "-a";
    av[2] = "test";
    cr_assert(eq(i32, has_opt(ac, av, 'a'), 1));
    free(av);
}

Test(has_opt, didnt_find_opt) {
    char **av;
    int ac;

    ac = 3;
    av = malloc(sizeof(char *) * 3);
    av[0] = "unit_test.out";
    av[1] = "-p";
    av[2] = "test";
    cr_assert(eq(i32, has_opt(ac, av, 'a'), 0));
    free(av);
}
