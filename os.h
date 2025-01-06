#ifndef OS_H
#define OS_H
#include <stdio.h>

void os_perror(char *file);
void warn(char *str){
    printf("%s\n", str);
}

#endif