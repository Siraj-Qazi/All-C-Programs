#define cls system("cls");
#include <stdio.h>
#include <conio.h>

void main(void)
{
	cls
	int x;
	printf("\n Enter x: ");
	if (!scanf_s("%d", &x))
	{
		scanf_s("%*[^\n]");
		printf("\n Please enter a number! <press any key>");
		_getch();
		main();
	}
	printf("\n The square's %d\n", x*x);
	_getch();
	main();
}