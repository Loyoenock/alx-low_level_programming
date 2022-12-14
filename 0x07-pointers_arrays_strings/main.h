#ifndef MAIN_H
#define MAIN_H

/**
 * void prototype()
 * int prototype()
 */

int _putchar(char);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
void set_string(char **s, char *to);
unsigned int _strspn(char *s, char *accept);

#endif /*MAIN_H*/
