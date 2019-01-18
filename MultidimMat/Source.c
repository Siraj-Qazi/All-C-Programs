//MUTLIDIMENSIONAL ARRAYS
#include<stdio.h>
#include<stdlib.h>

//SIZE of ARRAYS
#define ROW 5
#define COL 5

//Function Prototypes
//for initializing 2-D arrays
void init_Array(int b[][COL]); 
//for printing 2-D arrays
void print_Array(int b[][COL]);
//for taking transpose of a 2-D array
void transpose(int b[][COL], int b_t[][ROW]);
//for multiplying 2-D Arrays
void multiplyArray(int a[][COL], int b[][COL], int r[][COL]); 

int main()
{
	int a[ROW][COL];
	int b[ROW][COL];
	int r[ROW][COL] = {0};
	init_Array(a);
	puts("\n Matrix 1:\n ");
	print_Array(a); 
	init_Array(b);
	puts("\n Matrix 2:\n ");
	print_Array(b);
	multiplyArray(a, b, r);
	puts("\n Multiplication Result:\n ");
	print_Array(r);
	puts("\n____________________________________________________\n");

	int b_t[ROW][COL] = { 0 };
	puts("\n Before Trasnpose:\n ");
	print_Array(b);
	transpose(b, b_t);
	puts("\n After Trasnpose:\n ");
	print_Array(b_t);
	
	system("pause");
}

void init_Array(int b[][COL])
{
	srand(time(NULL));
	for (int i = 0; i < ROW; i++) //ROWS
	{
		for (int j = 0; j < COL; j++)// COLS
		{
			b[i][j] = rand() % COL + 1;
		}
	}

}
void print_Array(int b[][COL])
{
	for (int i = 0; i < ROW; i++) //ROWS
	{
		for (int j = 0; j < COL; j++)// COLS
		{
			if (j == 0)
				printf(" | %d\t", b[i][j]);
			else if (j == COL - 1)
				printf("  %d |\n", b[i][j]);
			else
				printf(" %d\t", b[i][j]);
		}
	}
	puts("");

}

void multiplyArray(int a[][COL], int b[][COL], int r[][COL])
{
	//please read the supporting document uploaded on LMS 
	//to understand the indexing in this function
	for (int s = 0; s < ROW; s++) {
		for (int z = 0; z < COL; z++) {
			for (int i = 0; i < ROW; i++)
			{
				r[s][z] += a[s][i] * b[i][z];

			}
		
		}
	}
}
void transpose(int b[][COL], int b_t[][ROW])
{
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
		{
			b_t[j][i] = b[i][j];

		}
	}
}
