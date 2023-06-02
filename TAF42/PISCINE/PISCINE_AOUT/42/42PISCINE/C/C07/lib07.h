#ifndef STRDUP_H
#define STRDUP_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/errno.h>
#include <unistd.h>

int *ft_range(int min, int max);
char *ft_strdup(char *str);
void ft_putnbr2(int c);
void ft_putchar(char c);
void ft_putnbrarr(int *num, int l);

#endif 
