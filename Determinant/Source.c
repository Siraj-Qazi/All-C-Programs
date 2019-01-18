#include <stdio.h>
#include <conio.h>
#define SIZE 3 // Matrix size

void printMatrix(int[SIZE][SIZE]);
int main()
{
	int A[SIZE][SIZE];
	int row, col;
	int a, b, c, d, e, f, g, h, i;
	long det;

	/* Input elements in matrix A from user */
	printf("\n Enter elements in matrix of size %dx%d: \n\n",SIZE,SIZE);
	entry:
	for (row = 0; row<SIZE; row++)
	{
		for (col = 0; col<SIZE; col++)
		{
			printf("\n Enter A[%d][%d]\n ", row, col);
			if (!scanf_s("%d", &A[row][col]))
			{
				scanf_s("%*[^\n]s");
				printf("\n Enter a valid integer.\n\n");
				goto entry;
			}
		}
	}

	a = A[0][0];
	b = A[0][1];
	c = A[0][2];
	d = A[1][0];
	e = A[1][1];
	f = A[1][2];
	g = A[2][0];
	h = A[2][1];
	i = A[2][2];

	det = (a*(e*i - f*h)) - (b*(d*i - f*g)) + (c*(d*h - e*g));
	printf(" Determinant of Matrix A : \n\n");
	printMatrix(A);
	printf("\n\n is %ld\n ", det);
	_getch();
}

void printMatrix(int a[SIZE][SIZE])
{
	for(int i=0;i<SIZE;++i)
		for (int j = 0; j < SIZE; ++j)
		{
			if (j == 0)
				printf(" | %d\t", a[i][j]);
			else if (j == 2)
				printf("%d |\n", a[i][j]);
			else
				printf(" %d\t", a[i][j]);
		}
	puts("");
}