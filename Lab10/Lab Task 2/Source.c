#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define clrscr system("cls")
#define SIZE 200
size_t matches = 0;
size_t lSearch(int[], int, size_t);
void initArr(int[], size_t);
void printArr(int[], size_t);

void main(void)
{
	clrscr;
	int a1[SIZE], n;
	initArr(a1, SIZE);
	
	printf("\n The %u - Element array is:\n\n ",SIZE);
	for (int i = 0; i < 165; ++i)
		printf("-");
	printf("\n\n");
	printArr(a1, SIZE);
	puts("");
	for (int i = 0; i < 165; ++i)
		printf("-");
	printf("\n\n Enter search key: ");
	scanf_s("%d", &n);
	puts("");
	for (int i = 0; i < 165; ++i)
		printf("-");
	size_t x = lSearch(a1, n, SIZE);
	if (x == -1)
		printf("\n\n Element was not found in the array.\n");
	for (int i = 0; i < 165; ++i)
		printf("-");
	printf("\n The element %d occurs %u times in the array.\n", n, matches);
	_getch();
	main();
}

void initArr(int a[], size_t size)
{
	srand(time(NULL));
	for (int i = 0; i < size; ++i)
	{
		a[i] = 1 + rand() % 50;
	}
}

void printArr(int a[], size_t size)
{
	for (int i = 0; i < size; ++i)
		printf(" %d ", a[i]);
}

size_t lSearch(int a[], int key, size_t size)
{
	int i;
	for (i = 0; i < size; ++i)
	{
		if (a[i] == key)
		{
			printf("\n Match was found at Element[%d]\n", i);
			matches++;
		}
	}
	if (i == size && matches == 0)
		return -1;

}
