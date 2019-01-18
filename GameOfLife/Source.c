#define _CRT_SECURE_NO_DEPRECATE
#define ROWS 35
#define COLS 85
#define sROW 6
#define sCOL 6
#define cls system("cls")

#include <stdio.h>
#include <conio.h>

void initArray(char[ROWS][COLS], char);     // Task 1 (a)
void printArray(char[ROWS][COLS]);          // Task 1 (b)
void printBorderedArray(char[ROWS][COLS], char);  // Task 1 (d)
void seedPattern(char[ROWS][COLS], char[sROW][sCOL], int, int);  // Task 1 (c)
void main(void)
{
	cls;
	printf("\n   CS113: LAB TASK 12\n");
	int grid[ROWS][COLS]; char c,s,b;
	printf("\n Enter the grid character ('.' is preferred): ");
	scanf_s(" %c", &c);
	printf("\n Enter seed's character ('#' is preferred): ");
	scanf(" %c", &s);
	printf("\n Enter border's character ('@' is preferred): ");
	scanf(" %c", &b);
	puts("\n 35 x 85 Grid:\n");
	initArray(grid, c);    // Task 1 (a)
	printArray(grid);      // Task 1 (b)

	char loaf[6][6] = {      // The Loaf ( With specified Character in char s)
		{ c,c,c,c,c },
		{c,c,s,s,c,c},
		{c,s,c,c,s,c},
		{c,c,s,s,c,c},
		{ c,c,c,c,c}
	               };

	printf("\n < PRESS ANY KEY TO ENTER COORDINATES > ");
	_getch();
getCoord:
	cls;
	int x, y;
	printf("\n Enter X and Y Coordinates: ");
	if (!scanf("%d %d", &x, &y))
	{
		scanf("%*[^\n]s");
		printf("\n Please enter only numbers.\n");
		_getch();
		goto getCoord;
	}
	seedPattern(grid, loaf, x, y);  // Task 1 (c)
	printArray(grid);
	printf("\n < PRESS ANY KEY TO BORDER THE GRID > ");
	_getch();
	cls;
	puts("");
	printBorderedArray(grid,b);      // Task 1 (d)
	printf("\n <PRESS ANY KEY TO RESTART > ");
	_getch();
	main();
}

// Function to initialize grid with specified character  [ TASK 1 (A) ]
void initArray(char arr[ROWS][COLS], char a)
{
	int i, j;
	for (i = 0; i < ROWS; ++i)
		for (j = 0; j < COLS; ++j)
			arr[i][j] = a;
}

// Function to print array  [ TASK 1 (B) ]
void printArray(char arr[ROWS][COLS])
{
	int i, j;
	for (i = 0; i < ROWS; ++i)
	{
		for (j = 0; j < COLS; ++j)
			printf("%c", arr[i][j]);
		puts("");
	}
}

// Function to overwrite grid array at specified coordinates  [ TASK 1 (C) ]
void seedPattern(char grid[ROWS][COLS], char pattern[sROW][sCOL],int x, int y)
{
	for (int i = 0; i < sROW-2; ++i)
		for (int j = 0; j < sCOL-1; ++j)
			grid[x + i][y + j] = pattern[i][j];
}

// Function to print bordered array   [ TASK 1 (D) ]
void printBorderedArray(char array[ROWS][COLS],char b)
{
	int i, j;
	for (i = 0; i < ROWS+1; ++i)
	{
		for (j = 0; j < COLS+1; ++j)
		{
			if (i == 0 || j == 0 || i == ROWS || j == COLS)
				printf("%c",b);
			else
				printf("%c", array[i][j]);
		}
		puts("");
	}
}
