#include <stdio.h>
#include <conio.h>
void main(void)
{
	printf("\n ####### Factorial Calculator ########\n\n");
	printf(" Enter a number:\n ");
	int i = 1, n;
	unsigned long long j = 1;
	scanf_s("%d", &n);
	for (i = 1; i <= n; ++i)
	{
		j = j*i;
	}
	printf(" Factorial of %d is %llu\n",n,j);
	_getch();
}