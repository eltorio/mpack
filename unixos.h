#ifndef UNIXOS_H_
#define UNIXOS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include <common.h>
#include "part.h"
char *os_genid(void);
char *os_idtodir(char *id);
void os_donewithdir(char *dir);
FILE *os_createnewfile(char *fname);
FILE *os_newtypedfile(char *fname, char *contentType, int flags, params contentParams);
void os_closetypedfile(FILE *outfile);
int os_binhex(struct _part *inpart, int part, int nparts);
void os_warnMD5mismatch(void);
void os_perror(char *file);

#endif
