#include <cstdio>
#include <cstdarg>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

void read(const char* buf, const char* format, ...) {
	va_list args;
	va_start(args, format);
	vsscanf(buf, format, args);
	va_end(args);
}

int main() {
	char buffer[100] = "Bruce Wayne Batman";
	char fname[20], lname[20], superhero[20];

	read(buffer, "%s %s %s", fname, lname, superhero);
	printf("%s %s is %s.\n", fname, lname, superhero);

	_getch();
	return 0;
}