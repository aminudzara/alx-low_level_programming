#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _strlen(char *s);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void print_grid(int **grid, int width, int height);
void free_grid(int **grid, int height);

#endif
