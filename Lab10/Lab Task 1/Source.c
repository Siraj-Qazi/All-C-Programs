#include<stdio.h>
#include<conio.h>

int bubbleSort_comps(int[], size_t);
void swap_elem(int* x, int* y);
void prA(int[], size_t);
void main(void)

{

	int array[] = { 84,86,83,12,99,3,12,345,78,32 };
	printf("\n ######### Efficient Bubble Sort ##########\n");
	printf("\n The unsorted array is:\n\n");
	prA(array, 10);
	printf("\n\n The array sorted using bubble sort is:\n\n");
	int comparisons = bubbleSort_comps(array, 10);
	prA(array, 10);
	printf("\n\n %d comparisons were made to sort the array.\n", comparisons);
	_getch();
}

void swap_elem(int* x, int* y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

int bubbleSort_comps(int a[], size_t length)
{
	int outer = 0;
	for (int i = 1; i < length; ++i)
	{
		int no_of_swaps = 0;	  // Initialize swaps counter
		for (int j = 0; j < length - i; ++j)  // Make 9 comparisons on 1st iteration, 8 on 2nd...
		{
			if (a[j] > a[j + 1])
			{
				swap_elem(&a[j], &a[j + 1]);
				no_of_swaps += 1;  // if a swap is made, increment counter

			}
		}
		outer++;		   // Increment outer loop counter
		if (no_of_swaps == 0)			// if no swaps were made, exit the loop
			break;
	}
	return outer;		   // Return number of outer loop iterations (no of comps)
}

void prA(int x[], size_t length)
{
	for (int i = 0; i < length; ++i)
		printf(" %d", x[i]);
}
