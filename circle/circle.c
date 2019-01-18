#include <stdio.h>
#include <conio.h>
#include <math.h>
#define point sqrt(x*x + y*y)
void main(void)
{
	int rad, x, y;
	printf("\n Enter radius: ");
	scanf_s("%d", &rad);
	for (x = -rad; x <= rad; x++)
	{
		for (y = -rad; y <= rad; y++)
		{
			if (point < rad)
				printf(" @");
			else
				printf("  ");
		}
		puts("");
	}
	_getch();
	system("cls");
	main();
}