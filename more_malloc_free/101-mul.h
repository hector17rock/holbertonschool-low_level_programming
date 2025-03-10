#ifndef _101_MUL_H_
#define _101_MUL_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_digit(char *s);
int str_len(char *s);
void print_error(void);
int *allocate_result(int size);
void print_result(int *result, int size);
void multiply(char *num1, char *num2);

#endif /* _101_MUL_H_ */
