#include <stdio.h>
#include <conio.h>
void main(void)
{
	printf("\n Even numbers between 40 and 100 are:\n\n");
	int i, j;
	for (i = 41,j=1; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			printf(" %d\n\n", i);
			j++;
		}
	}
	printf(" Total Even numbers between 40 and 100 are %d\n", j);
	_getch();
}