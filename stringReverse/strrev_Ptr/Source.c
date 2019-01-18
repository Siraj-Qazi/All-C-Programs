#include <stdio.h>
#include <conio.h>
#include <string.h>

void strReverse(char*, int);
void main()
{
	char* a = "Hello there";
	puts(a);
	strReverse(a, strlen(a));
	_getch();
}

void strReverse(char* a, int len)
{
	for (; a[len] != *a; --len)
	{
		printf("%c", a[len-1]);
	}
}
