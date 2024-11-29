#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 13847748
#endif

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char *save, char *buff);
char *ft_strdup(char *s);
int ft_strlen(char *s);
char *ft_strchr(char* str, int c);
#endif