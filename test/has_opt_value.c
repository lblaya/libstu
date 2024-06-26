#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdlib.h>
#include "stu.h"

Test(has_opt_value, normal_test) {
    char **av;
    int ac;

    ac = 3;
    av = malloc(sizeof(char *) * 3);
    av[0] = "unit_test.out";
    av[1] = "-m";
    av[2] = "fhdsfm";
    cr_assert(eq(str, has_opt_value(ac, av, 'm'), "fhdsfm"));
    free(av);
}

Test(has_opt_value, notgood_test) {
    char **av;
    int ac;

    ac = 3;
    av = malloc(sizeof(char *) * 3);
    av[0] = "unit_test.out";
    av[1] = "-m";
    av[2] = "fhdsfm";
    cr_assert(eq(ptr, has_opt_value(ac, av, 'p'), NULL));
    free(av);
}
