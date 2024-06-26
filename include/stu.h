#ifndef STU_H_
#define STU_H_
#include <stdarg.h>

unsigned int stu_strlen(const char *str);
char *stu_strcpy(char *dest, const char *src);
int stu_strcmp(const char *s1, const char *s2);
char *stu_strdup(const char *chaine);
char *stu_strchr(const char *first, char sec);
int stu_atoi(char *str);
int print_base10(int nb);
int stu_puts(char *var);
int has_opt(int argc, char **argv, char par);
char *has_opt_value(int argc, char **argv, char par);

//semmaine immersion :

void *stu_memset(void *ptr, char byte, unsigned int n);
void *stu_memcpy(void *dest, const void *src, unsigned int n);
void *arrset(void *array, const void *elem, unsigned int elem_size,
             unsigned int n);
void *stu_memmove(void *dest, const void *src, unsigned int n);

//printf includes :

struct dprint_table_row {
    char comb;
    int (*fptr)(int fd, va_list args);
};

int print_base(int fd, long nb, const char *base);
int print_str(int fd, va_list args);
int print_char(int fd, va_list args);
int print_int(int fd, va_list args);
int print_int_sign(int fd, va_list args);
int print_hexa(int fd, va_list args);
int print_bin(int fd, va_list args);
int print_oct(int fd, va_list args);
int print_ptr(int fd, va_list args);
int print_percent(int fd, va_list args);
int stu_dprintf(int fd, const char *pattern, ...);

#endif
