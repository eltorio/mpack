#ifndef CODES_H
#define CODES_H
#include <stdio.h>

void output64chunk(int c1, int c2, int c3, int pads, FILE *outfile);
int to64(FILE *infile, FILE *outfile, long int limit);

#endif