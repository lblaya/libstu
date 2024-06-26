#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

static void tc_putchar(char c)
{
    write(1, &c, 1);
}

static int nb_len(int nb)
{
    int length;

    length = 1;
    while (nb % 10 != nb) {
        nb = nb / 10;
        length = length + 1;
    }
    return length;
}

static int get_digit(int nb, int index)
{
    int res;

    res = nb;
    while (index != 0) {
        res = res / 10;
        index = index - 1;
    }
    res = res % 10;
    return res;
}

int print_base10(int nb)
{
    int cnt;

    cnt = nb_len(nb) - 1;
    if (nb < 0) {
        tc_putchar('-');
        nb = -nb;
    }
    if (nb == 0) {
        tc_putchar('0');
    } else {
        while (cnt >= 0) {
            tc_putchar(get_digit(nb, cnt) + '0');
            cnt = cnt - 1;
        }
    }
    write(1, "\n", 1);
    return nb_len(nb);
}
