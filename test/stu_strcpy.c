#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdlib.h>
#include "stu.h"

Test(stu_strcpy, normal) {
    char *buffer = malloc(sizeof(char) * 12);
    char *result = stu_strcpy(buffer, "dfsfsfsfsfs");
    cr_expect(eq(ptr, result, buffer));
    cr_expect(eq(str, buffer, "dfsfsfsfsfs"));
    free(buffer);
}
