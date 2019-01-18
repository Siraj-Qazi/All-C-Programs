#include <stdio.h>
#include <conio.h>
void main(void)
{
	system("cls");
	unsigned long long num = 1, count = 0;
	int n, i = 0;
	printf("\n Enter 'n' to print the first 'n' digits of Fibonacci Series: \n\n ");
	scanf_s("%d", &n);
	printf("\n -----------------------------\n\n");
	while (i < n)
	{
		num = num + count;                       
		if (num==1)                   // To get the space problem done.
		    printf("  %llu\n\n ", num);
		else
			printf(" %llu\n\n ", num);
		i++;
		count += num;
		printf(" %llu\n\n ", count);
		i++;
	}
	_getch();
	main();
}