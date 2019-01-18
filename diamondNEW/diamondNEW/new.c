#include<stdio.h>

int main()
{
	int a, i, j;
	printf("\n Enter diamond stretch factor 'n' : ");
	scanf_s("%d", &a);
	puts("");
	int k = 0, l = 0;
	for (i = 1; i <= a; i++)
	{
		for (j = i; j <= a; j++)
			printf(" ");
		printf("*");
		for (j = 1; j < l; j++)
			printf(" ");
		l += 2;
		for (j = 1; j < k; j++)
			printf("*");
		puts("");
		k = 2;
	}
	for (i = 1; i <= a + 1; i++)
	{
		for (j = 1; j < i; j++)
			printf(" ");
		printf("*");
		for (j = i; j <= a - 1; j++)
			printf("  ");
		if (i != a + 1)
			printf(" *");
		puts("");
	}
	system("pause");
}
