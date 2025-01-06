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
FILE *os_createnewfile(char *fname);
FILE *os_newtypedfile(char *fname, char *contentType, int flags, params contentParams);

int os_binhex(struct _part *inpart, int part, int nparts);

void os_perror(char *file);

#endif
