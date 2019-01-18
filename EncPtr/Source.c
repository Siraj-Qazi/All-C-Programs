#include<stdio.h>
#include<conio.h>

void encrypt(char*);
void decrypt(char*);
void pr_s(char*);
void main(void)
{
	char string[] = "This is plain text!";
	pr_s(string);
	encrypt(string);
	pr_s(string);
	decrypt(string);
	pr_s(string);
	_getch();
}
void encrypt(char *a)
{
	for (; *a != '\0'; a++)
	{
		*a = *a + 11;
	}
}
void decrypt(char *a)
{
	for (; *a != '\0'; a++)
	{
		*a = *a - 11;
	}
}
void pr_s(char *a)
{
	printf("\n ");
	for (; *a != '\0'; ++a)
		printf("%c", *a);
	puts("");
}