#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main(void)
{
	char c, siraj[5];
	int i = 0;
	printf("%s", "\n Enter a 5-Digit Number: (YOU CAN'T ENTER ANY MORE LOLZ): ");
	while (i < 5)
	{
		siraj[i] = _getch();
		if (!isdigit(siraj[i]))
		{
			printf("%s", "\n\n Please enter only numbers.\n");
			printf("%s", "<PLEASE ENTER THIS NUMBER AGAIN>\n\n");
			printf("\n %d digit(s) entered, enter remaining digits: ",i);
			continue;
		}
		_putch(siraj[i]);
		i++;
	}
	puts("\n\n");
	for (i = 5; i >=0 ; --i)
	{
		switch (siraj[i])
		{
		case '1':
			printf(" ONE"); break;
		case '2':
			printf(" TWO"); break;
		case '3':
			printf(" THREE"); break;
		case '4':
			printf(" FOUR"); break;
		case '5':
			printf(" FIVE"); break;
		case '6':
			printf(" SIX"); break;
		case '7':
			printf(" SEVEN"); break;
		case '8':
			printf(" EIGHT"); break;
		case '9':
			printf(" NINE"); break;
		case '0':
			printf(" ZERO"); break;
		}
	}
	_getch();
}