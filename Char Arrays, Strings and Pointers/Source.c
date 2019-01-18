#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

char* scans(char*);
char str[100];
void main(void)
{
	char s[] = { 'S','I','R','A','J' };
	char s2[] = "SIRAJ";
	char* s3 = "SIRAJ";
	char s4[] = { 'S','I','R','A','J','\0' };
	puts(s);
	puts(s2);
	puts(s3);
	puts(s4);
	char* x = scans("\n Enter a string: ");
	puts(x);
	_getch();
}
char* scans(char* message)
{
	puts(message);
	printf("> ");
	scanf(" %s", str);
	return str;
}