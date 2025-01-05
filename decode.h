/* (C) Copyright 1993,1994 by Carnegie Mellon University
 * All Rights Reserved.
 *
 * Permission to use, copy, modify, distribute, and sell this software
 * and its documentation for any purpose is hereby granted without
 * fee, provided that the above copyright notice appear in all copies
 * and that both that copyright notice and this permission notice
 * appear in supporting documentation, and that the name of Carnegie
 * Mellon University not be used in advertising or publicity
 * pertaining to distribution of the software without specific,
 * written prior permission.  Carnegie Mellon University makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied
 * warranty.
 */

#ifndef DECODE_H
#define DECODE_H

#define PARAMGROWSIZE 10

/* The possible content transfer encodings */
enum encoding { enc_none, enc_qp, enc_base64 };
char *ParseHeaders(struct _part *inpart, char **subjectp, char **contentTypep, enum encoding *contentEncodingp, char **contentDispositionp, char **contentMD5p);
enum encoding parseEncoding(char *s);
params ParseContent(char **headerp);
char *getParam(params cParams, char *key);

char *getDispositionFilename(char *disposition);
void from64(struct _part *inpart, FILE *outfile, char **digestp, int suppressCR);
void fromqp(struct _part *inpart, FILE *outfile, char **digestp);
void fromnone(struct _part *inpart, FILE *outfile, char **digestp);
int handleMessage(struct _part *inpart, char *defaultContentType, int inAppleDouble, int extractText);


#endif /* DECODE_H */