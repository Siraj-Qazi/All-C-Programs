#include<stdio.h>
#include<conio.h>
#define clrscr() system("cls")

void qSort(int [], size_t, size_t);
void swap_elem(int*, int*);
void print_array(int [],size_t);
void main()
{
	clrscr();
	int a[] = { 4,3,45,32,45,98,32,11,34,90 };
	printf("\n #########  QuickSort Algorithm #########\n\n");
	printf("\n The unsorted array is:\n\n");
	print_array(a,10);

	//Call to qSort Func
	qSort(a, 0, 9);

	printf("\n The Sorted Array is:\n\n");
	print_array(a, 10);
	_getch();
}

void qSort(int a[], size_t lower_index, size_t higher_index)
{
	int pivot, i, j;
	if (lower_index < higher_index )
	{
		i = lower_index;
		j = higher_index;
		pivot = lower_index;
		while (i < j)
		{
			while ((a[i] <= a[pivot]) && (i<higher_index))
				i+=1;

			while (a[j] > a[pivot])
				j-=1;

			if (i < j)
				swap_elem(&a[i], &a[j]);
		}

		swap_elem( &a[pivot], &a[j] );
        qSort(a, lower_index, j - 1);
		qSort(a, j + 1, higher_index);
	}
}

void swap_elem(int* x, int* y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

void print_array(int a[], size_t length)
{
	for (int i = 0; i<length; i++)
	{
		printf(" %3d", a[i]);
	}
	puts("");
}