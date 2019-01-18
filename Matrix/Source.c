#include<stdio.h>
#include<conio.h>

#define ROWS 2
#define COLS 2
int result[][COLS] = { { 0 },{ 0 }};

void print_array(int [][COLS]);
void init_array(int [][COLS]);
void init_array2(int [][COLS]);
int multiply_array(int [][COLS], int [][COLS]);
void main(void)
{
	int ar1[ROWS][COLS];
	int ar2[ROWS][COLS];
	init_array(ar1);
	init_array(ar2);
	print_array(ar1);
	print_array(ar2);
	multiply_array(ar1, ar2);
	print_array(result);
	_getch();
}
void print_array(int b[][COLS])
{
	puts("");
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf(" %d\t", b[i][j]);
		}
		puts("");
	}
}
int multiply_array(int a[][COLS], int b[][COLS])
{
	int i, j;
	for (i = 0; i < ROWS; ++i)
	{
		for (j = 0; j < COLS; ++j)
		{
			result[i][j] += (a[i][j] * b[j][i]);
		}
	}
}
void init_array(int x[][COLS])
{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				x[i][j] = 1+rand()%10;
			}
		}
}
