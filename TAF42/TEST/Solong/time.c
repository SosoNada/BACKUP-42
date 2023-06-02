#include <stdio.h>
#include <time.h>

int main() {
	time_t timestamp = 1682633998;
	struct tm *tm_info = localtime(&timestamp);

	printf("Date: %02d/%02d/%d\n", tm_info->tm_mday, tm_info->tm_mon + 1, tm_info->tm_year + 1900);
	printf("Heure: %02d:%02d:%d\n", tm_info->tm_hour, tm_info->tm_min + 1, tm_info->tm_sec);

	return 0;
}
