char *stu_strcpy(char *dest, const char *src)
{
    int cnt;

    cnt = 0;
    while (src[cnt] != '\0') {
        dest[cnt] = src[cnt];
        cnt = cnt + 1;
    }
    dest[cnt] = '\0';
    return dest;
}
