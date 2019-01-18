#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define cls system("cls")
#define SIZE 51

size_t binarySearch(const int a[], int key, size_t low, size_t high);
void printArray(int[], size_t);

void main(void)
{
	cls;
	int ar[SIZE], skey;
	srand(time(NULL));
	for (int i = 0; i < SIZE; ++i)
		ar[i] = 2 * i;

	printf("\n The array is : \n\n ");
	printArray(ar, SIZE);

	printf("\n\n");
	for (int i = 0; i < 120; ++i)
		printf("-");
	printf("\n\n Enter search key: ");
	scanf_s("%d", &skey);

	size_t key = binarySearch(ar, skey, 0, SIZE - 1);
	if (key != -1)
		printf("\n Key located at array[ %u ]\n", key);
	else
		printf("\n Element wasn't found in the array.\n");
	_getch();
	main();
}

size_t binarySearch(const int a[], int key, size_t low, size_t high)
{
	size_t i, mid;
	for (i=low ; i <= high; ++i)
	{
		mid = (low + high) / 2;

		if (key == a[mid])
			return mid;

		else if (key > a[mid])
			low = mid + 1;

		else
			high = mid - 1;
	}
     return -1;
	
}

void printArray(int a[], size_t size)
{
	for (int i = 0; i < size; i++)
		printf(" %d", a[i]);
}

