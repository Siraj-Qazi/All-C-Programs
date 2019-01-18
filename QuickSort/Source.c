#include <stdio.h>
#include <conio.h>

void qSort(int[], int,int);
void swap(int *, int *);
void main(void)
{
	int array[] = { 9,3,1,7,4,2,5,6,8,10 };
	
	qsort(array, 0, 9);

	printf(" Sorted array is:\n\n ");
	for (int i = 0; i<10; ++i)
		printf(" %d ", array[i]);
	_getch();
}

void qSort(int a[], int lower_index, int higher_index) 
{
	int i, j, pivot,temp;

	if (lower_index < higher_index)
	{
		i = lower_index, 
	    j = higher_index;
		pivot = lower_index;
	}
	while (i < j) 
	{
        while (a[i] <= a[pivot] && i<higher_index)
           i+=1;

		while (a[j] > a[pivot])
           j-=1;

		if (i < j) 
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}

	}
	temp = a[pivot];
	a[pivot] = a[j];
	a[j] = temp;
	qSort(a, lower_index, j - 1);
	qSort(a, j + 1, higher_index);

}
void swap(int* x, int* y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
