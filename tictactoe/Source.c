#include<stdio.h>
void display(void);
char input[9];
int inputf(void);
int main()
{
	puts("");

	
	for (int y = 49; y <= 57; y++)
	{
		input[y-48] = y;
	}
	int i = 10;
	while (i > 9)
	{
		display();
		input[inputf()] = 'X';
		i--;
		system("cls");
	}
    

	_getch();
}
void display()
{
	for (int i = 1; i <10; i = i + 3)
	{
		printf("  %c  |  %c  |  %c  \n  ", input[i], input[i + 1], input[i + 2]);
		puts("");
	}
}
int inputf()
{
	int x;
	printf("Enter number: ");
	scanf_s("%d", &x);
	puts("");
	if (x == 0)
	{
		x = 10;
	}
	while (!(input[x-1] == (48 + x)))
	{
		printf("Enter number: ");
		scanf_s("%d", &x);
		puts("");
	}
	return x;
}