#include <stdio.h>
#include <conio.h>
void main(void)
{
	int num,tenthou,thou,hundred,ten,unit;
	printf("\n Enter a 5-Digit number: ");
	scanf_s("%d", &num);
	printf("\n The separated digits are:\n\n");
    tenthou = num % 10;
	num = num / 10;
	thou = num % 10;
	num = num / 10;
	hundred = num % 10;
	num = num / 10;
	ten = num % 10;
	num = num / 10;
	unit = num % 10;
	num = num / 10;
	printf(" %d  %d  %d  %d  %d ", unit,ten,hundred,thou,tenthou);
	_getch();
}