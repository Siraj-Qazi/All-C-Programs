#include <stdio.h>
#include <conio.h>
#define between(i,x,y) (i>=x && i<=y)
void main(void)
{
	int a[20];
	int i, k;
	system("cls");
	printf("%s", "\n Enter the 20 elements <From 10-100>:\n ");
	for (i = 0,k=0; i < 20 && k<20; ++i,++k)
	{
		printf("\n\n Entry no. %d: ", k + 1);
		scanf_s("%d", &a[i]);

		if (!between(a[i], 10, 100))
		{
			printf("\n Please enter a number from 10 to 100.\n <PRESS ANY KEY TO ENTER AGAIN>\n");
			_getch();
			i--; k--;
			continue;
		}
		for (int j = 0; j < i; ++j)
		{
			if (a[i] == a[j])
			{
				printf("\n Duplicate detected. Discarded.\n <PRESS ANY KEY>");
				_getch();
				i--;
				break;
			}
		}
		
	}
	int* arr = (int*)malloc(i * sizeof(int));
	for (int j = 0; j < i; ++j)
		arr[j] = a[j];
	printf("\n\n Number of unique elements = %d\n\n The unique elements entered are:\n",i);
	for (int j = 0; j < i; ++j)
		printf(" %d\n", arr[j]);
	_getch();

}