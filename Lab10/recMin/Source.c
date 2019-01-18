#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 20
#define cls system("cls");

int recursiveMinimum(int[], size_t);
void initArr(int[],int, size_t);
void printArr(int[], size_t);

void main(void)
{
	int ar1[SIZE];
	initArr(ar1, 15, SIZE);
	printf("\n\n The array is:\n ");
	printArr(ar1, SIZE);
	int minimum = recursiveMinimum(ar1, SIZE);
	printf("\n The smallest element is the array is %d\n", minimum);
	_getch();
}
int recursiveMinimum(int a[], size_t size)
{
	int n;
	if (size == 1) 
		return a[0];
	else 
		n = recursiveMinimum(a, size - 1);
	if (a[size - 1] < n)
		return a[size - 1];
	else
		return n;
	}

void initArr(int a[], int n, size_t size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		a[i] = 1 + rand() % n;
}

void printArr(int a[], size_t size)
{
	for (int i = 0; i < size; i++)
	printf(" %d", a[i]);
}