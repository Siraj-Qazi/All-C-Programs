#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main(void)
{
	char c;
	scanf_s(" %c", &c);
	int b = c-'0';
	printf(" %d", b);
	_getch();
}