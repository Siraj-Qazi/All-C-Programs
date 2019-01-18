#include<stdio.h>
void main(void)
{
	int i, j, k = 2;
	for (i = 1; i <= 6; i++)
	{
		for (j = i; j <= 5; j++)
			printf("0\t");
		for (j = 1; j <= i; j++)
		{
			printf("%d\t", k);
			k += 2;
		}
		puts("");
	}
	getchar();
}