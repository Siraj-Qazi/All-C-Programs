#include <stdio.h>
#include <conio.h>
#define disp printf
void main(void)
{
	int array1[] = {55,32,35,12,67,43,99};
	int a = 0;;
	for (int j=0;j<7;++j)
	for (int i = 0; i < 7; i++)
	{
		
		if (array1[i] > array1[i + 1])
		{
			a = array1[i];
			array1[i] = array1[i + 1];
			array1[i + 1] = a;
		}
	}
	disp("\n Hey bitch, sorted array is:  ");
	for (int i = 0; i < 6; i++)
		printf(" %d", array1[i]);
	_getch();
}

