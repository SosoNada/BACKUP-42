#ifndef VIDE_BUFFER_H
#define VIDE_BUFFER_H

#include <string.h>

void viderBuffer()
{
	int c = 0;

	while(c != '\n' && c != EOF)
		c = getchar();
}

#endif
