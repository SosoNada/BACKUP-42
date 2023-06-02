#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(int argc, char *argv[])
{
	int a = 10;
	int b = 3;

	printf("%d\n%d\n", a, b);
	
	ft_ultimate_div_mod(&a, &b);

	printf("%d\n%d\n", a, b);
	
	return 0;
}

/*void ft_ultimate_div_mod(int *a, int *b)
{
	int div = 0;
	int mod = 0;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}*/

void ft_ultimate_div_mod(int *a, int *b)
{       
        int temp;
        
        temp = *a;
        *a /= *b;
        *b = temp % *b;
}       

