#include <stdio.h>
#include <conio.h>
#define mian main
#define SIZE 10
void some(const int[], size_t, size_t);
void stringReverse(char*);
void mian(void)
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("\n Some serious recursion at work.\n");
	some(a, 0, SIZE);
	_getch();
	stringReverse("Hello there");
	_getch();

}
void some(const int a[], size_t sub, size_t size)
{
	if (sub < size)
	{
		some(a, sub + 1, size);
		printf(" %d\n", a[sub]);
	}
}

void stringReverse(char* a)
{
	if (*a!='\0')
	{
		stringReverse(a + 1);
		printf("%c", *a);
	}
}