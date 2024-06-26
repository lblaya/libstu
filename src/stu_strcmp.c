int stu_strcmp(const char *s1, const char *s2)
{
    int cnt;

    cnt = 0;
    while (s1[cnt] != '\0' && s2[cnt] != '\0') {
        if (s1[cnt] != s2[cnt]) {
            return -1;
        }
        cnt = cnt + 1;
    }
    if (s1[cnt] == '\0' && s2[cnt] == '\0') {
        return 0;
    } else {
        return -1;
    }
}

