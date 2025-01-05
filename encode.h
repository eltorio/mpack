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

#ifndef ENCODE_H
#define ENCODE_H

#include <stdio.h>

/* Nombre maximum de références supportées */
#define NUMREFERENCES 4

/**
 * Encode un fichier en un ou plusieurs messages MIME.
 * @param infile Fichier d'entrée à encoder
 * @param applefile Fichier Apple (peut être NULL)
 * @param fname Nom du fichier
 * @param descfile Fichier de description (peut être NULL)
 * @param subject Sujet du message
 * @param headers En-têtes additionnels
 * @param maxsize Taille maximale de chaque message (0 pour illimité)
 * @param typeoverride Type MIME forcé (peut être NULL)
 * @param outfname Nom du fichier de sortie
 * @return 0 en cas de succès, 1 en cas d'erreur
 */
int encode(FILE *infile, FILE *applefile, char *fname, FILE *descfile, 
          char *subject, char *headers, long int maxsize, 
          char *typeoverride, char *outfname);

#endif /* ENCODE_H */