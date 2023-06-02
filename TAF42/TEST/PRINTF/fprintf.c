#include <stdio.h>

int main() {
	FILE *file;
	file = fopen("file_test.txt", "w");
	fprintf(file, "Text test");
       	fclose(file);
	return 0;
}
