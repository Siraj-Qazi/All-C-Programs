#include<stdio.h>
void main(void)
{
	int i=1;
	for (; i != -1; scanf_s("%d", &i))  //Sentinel  For
		printf("\n Loop Running:  For\n ");
	printf(" EOF Value entered. Exiting For loop.\n");
	i = 1;
	printf("\n Loop Running:  While\n");
	getch();
	while (i != -1)   //Sentinel While
	{
		printf("\n Loop Running:  While\n ", scanf_s("%d", &i));
	}
	printf(" EOF Value entered. Exiting While loop.\n");
	getch();
}