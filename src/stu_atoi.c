int stu_atoi(char *str)
{
    int cnt;
    int result;
    int neg;

    cnt = 0;
    result = 0;
    neg = 1;
    if (str[0] == '-') {
        neg = -1;
        cnt = 1;
    }
    while (str[cnt] >= '0' && str[cnt] <= '9') {
        result = result * 10 + str[cnt] - '0';
        cnt = cnt + 1;
    }
    return result * neg;
}
