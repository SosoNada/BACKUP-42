#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(int argc, char *argv[])
{
	int *********i;
	int ********j;
	int *******k;
	int ******l;
	int *****m;
	int ****n;
	int ***o;
	int **p;
	int *Point;
	int num;

	i = &j;
	j = &k;
	k = &l;
	l = &m;
	m = &n;
	n = &o;
	o = &p;
	p = &Point;
	Point = &num;

	num = 21;

	ft_ultimate_ft(i);
	
	printf("%d", num);

	return 0;
}

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
