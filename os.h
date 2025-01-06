#ifndef OS_H
#define OS_H
#include <stdio.h>

void os_perror(char *file);

void warn(char *s)
{
    fprintf(stderr, "munpack: warning: %s\n", s);
}

#endif