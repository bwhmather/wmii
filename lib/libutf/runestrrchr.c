/*
 * The authors of this software are Rob Pike and Ken Thompson.
 *              Copyright (c) 2002 by Lucent Technologies.
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy
 * or modification of this software and in all copies of the supporting
 * documentation for such software.
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY.  IN PARTICULAR, NEITHER THE AUTHORS NOR LUCENT TECHNOLOGIES MAKE
 * ANY REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 */
#include <stdarg.h>
#include <string.h>
#include "plan9.h"
#include "utf.h"

Rune*
runestrrchr(const Rune *s, Rune c)
{
	const Rune *r;

	if(c == 0)
		return runestrchr(s, 0);
	r = 0;
	while((s = runestrchr(s, c)))
		r = s++;
	return (Rune*)r;
}
