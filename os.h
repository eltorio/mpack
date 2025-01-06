#ifndef OS_H
#define OS_H
#include <stdio.h>

void os_perror(char *file);
void os_donewithdir(char *dir);
void os_closetypedfile(FILE *outfile);
void os_warnMD5mismatch(void);
void chat(char *s);

#define warn(s)  fprintf(stderr, "mpack: warning: %s\n", s);

#endif