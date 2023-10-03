#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int _strlen(char *s);
char **strtow(char *str);
int word_count(char *str);
char *_strncpy(char *dest, char *src, int n);
int all_spaces(char *str);
char *allocate_word(char *str, int length);


#endif
