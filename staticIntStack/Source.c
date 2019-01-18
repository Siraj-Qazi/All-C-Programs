#include <stdio.h>
#include <conio.h>
static int val;
int main()
{
	
	if (val == 0)
	{
		//clears the console
		system("cls");
	}
	while (val<3)
	{
		val++;
		printf("Called main , val= %d\n", val, main());
	}
	puts("Press a key");
	_getch();
}
