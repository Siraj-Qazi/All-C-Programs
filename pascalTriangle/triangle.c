#include <stdio.h>
#include <conio.h>
unsigned long factorial(int);

void main()
{
	int i, j,n;

	printf("Enter the number of rows you wish to see in pascal triangle\n");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n-i-1; j++)
			printf("  ");

		for (j = 1; j <= i; j++)
			printf("%lu ", factorial(i) / (factorial(j)*factorial(i - j)));

		puts("");
	}

	_getch();
	system("cls");
	main();
}

unsigned long factorial(int n)
{
	int x;
	unsigned long facto = 1;

	for (x = 1; x <= n; x++)
		facto = facto*x;

	return facto;
}