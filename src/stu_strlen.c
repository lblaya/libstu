unsigned int stu_strlen(const char *str)
{
    int cnt;

    cnt = 0;
    while (str[cnt] != '\0') {
        cnt = cnt + 1;
    }
    return cnt;
}
