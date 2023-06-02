#include <stdio.h>
#include <unistd.h>

int  main()
{
	// on donne au char c la valeur binaire 's'
	static unsigned int c; // static unsigned char c; fonctionnne aussi
	static int i;

	c |= (1 << i++);
	c |= (1 << i);
	i = 4;
	c |= (1 << i++);
	c |= (1 << i++);
	c |= (1 << i);

	putchar(c);

	return 0;
}
