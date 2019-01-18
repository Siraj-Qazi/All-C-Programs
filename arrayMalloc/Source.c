#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(void)
{
	int size;
	printf("\n Enter the size of the integer array you wanna make: ");
	scanf_s("%d", &size);
	int* arr;
	arr = (int*) malloc(size * sizeof(int));
	for (int j = 0; j < size; ++j)
	{
		printf("\n Enter arr[%d]: ", j);
		scanf_s("%d", &arr[j]);
	}
	for (int j = 0; j < size; ++j)
	{
		printf("\n\n Value of arr[%d]:  %d", j,arr[j]);
	}
	_getch();
}