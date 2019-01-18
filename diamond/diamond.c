#include <stdio.h>
#include <conio.h>
void main(void)
{
	int n, i, j;
	int k = 0;
	printf("\n Enter diamond's size: ");
	scanf_s("%d", &n);
	puts("");
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j++)
			printf(" ");
		printf("*");
		for (j = 1; j <= k; j++)
				printf(" ");
		if (i <= 2)
			k+=1;
		else if (i > 2)
			k += 2;
		if (i!=1)
		    printf("*");
		puts("");
	}
	for (i = 1; i <= n+1; i++)
	{
		for (j = 1; j < i; j++)
			printf(" ");
		printf("*");
		for (j = i; j <= n; j++)
			printf("  ");
		printf("*");
		puts("");
	}
	_getch();
}