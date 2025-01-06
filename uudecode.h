#ifndef UUDECODE_H
#define UUDECODE_H
#include <stdio.h>

int handleUuencode(struct _part *inpart, char *subject, int extractText);
int uudecodefiles(char *dir, int nparts);
int uudecodeline(char *line, FILE *outfile);
int parseSubject(char *subject, char **fnamep, int *partp, int *npartsp);
int saveUuFile(struct _part *inpart, char *fname, int part, int nparts, char *firstline);
int descEnd(char *line);
#endif