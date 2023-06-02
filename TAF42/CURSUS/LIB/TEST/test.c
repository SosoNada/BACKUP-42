#include <stdio.h>
#include <memory.h>
#include <string.h>

int main()
{
	char str1[50] = "This is india: a wonderful country";
	char str2[30];
	      
	printf("%s",str1);
	strncpy(str2,str1,15);
	memcpy(str2,str1,15);
//	str2[12] = "";
	printf("\n%s",str2);
	printf("\n%c%c",str2[12],str2[13]);
		
	return (0);
}
