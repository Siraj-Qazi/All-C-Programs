#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void print_square(int, char);
void main(void)
{
	system("cls");
	int j,k;
	system("color 0a");
	printf("\n Enter square's side: ");
	char s;
	scanf_s(" %c", &s);
	k = s - 48;
	if (k >= 10)
		goto yes;
	else if (!(isdigit(s)))
	{
		printf("\n How do u even expect me to print \n a square with side length %c ?\n", s);
		main();		
		_getch();

	}
	yes:
	j = s - 48;
	printf("\n Enter printing character: ");
	char c;
	scanf_s(" %c", &c);
	puts("");
	print_square(j, c);
	_getch();
	main();
}
void print_square(int x, char y)
{
	system("color 0d");
	for (int i = 0; i <= x; i++)
	{
		for (int j = 0; j <= x; j++)
			printf(" %c", y);
		puts("");
	}
}
