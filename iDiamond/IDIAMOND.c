#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i, j;
	system("cls");
	printf("\n Enter diamond dimension (rows) 'n' : ");
	scanf_s("%d", &n);
	if (!(n >= 0 && n <= 9999))
	{
		printf("\n You didn't enter a natural number as rows!\n");
		printf(" As a penalty, the program will now terminate.\n");
		_getch();
		exit();
	}
	n/=2;
	puts("");
	int l = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j++)
			printf(" ");
		printf("+");
		for (j = 1; j < l; j++)
			printf(" ");
		l+=2;
		if (i!=1)
			printf("+");
		puts("");
	}
	for (i = 1; i <= n+1; i++)
	{
		for (j = 1; j < i; j++)
			printf(" ");
		printf("+");
		for (j = i; j <= n-1; j++)
			printf("  ");
		if (i != n + 1)
			printf(" +");
		puts("");
	}
	printf("\n Copyright(C) Siraj :P");
	_getch();
	main();
}
