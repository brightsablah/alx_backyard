#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int n);
int _strlen_recursion(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _puts(char *str);
void strmul(char *num1, char *num2, char *result);
int _strlen(char *s);
void *int_calloc(int nmemb, int size);

void str_mul(char *num1, char *num2, int l1, int l2, int *m_res, char *res);
void *my_calloc(int nmemb, int size);
int _strlen(char *s);
int _putchar(char c);
void _puts(char *str);
char *_strcpy(char *dest, char *src);
int _isdigit(int c);
int _str_number(char **str, int n);


#endif
