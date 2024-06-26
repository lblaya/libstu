#include <stdlib.h>
#include "intarr.h"

struct intarr *intarr_create(int d)
{
    struct intarr *tabl;

    tabl = malloc(sizeof(struct intarr));
    if (tabl == NULL) {
        return NULL;
    }
    tabl->x = malloc(sizeof(int) * (d));
    tabl->height = 0;
    tabl->capacity = d;
    return tabl;
}

void intarr_delete(struct intarr *freer)
{
    if (freer != NULL) {
        free(freer->x);
        free(freer);
    }
}

int intarr_push(struct intarr *push, int p)
{
    if (push->height < push->capacity) {
        push->x[push->height] = p;
        push->height = push->height + 1;
        return 1;
    } else {
        return 0;
    }
}

int intarr_sum(struct intarr *sum)
{
    int res;
    int index;

    res = 0;
    index = 0;
    while (sum->x[index] != sum->x[sum->height]) {
        res = res + sum->x[index];
        index = index + 1;
    }
    return res;
}

int intarr_avg(struct intarr *avg)
{
    int res;
    int index;

    res = 0;
    index = 0;
    while (avg->x[index] != avg->x[avg->height]) {
        res = res + avg->x[index];
        index = index + 1;
    }
    res = res / avg->height;
    return res;
}
