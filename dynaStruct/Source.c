#define _CRT_SECURE_NO_WARNINGS
#define wait system("pause");
#define cls system("cls");
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



int i = 0;
FILE *fp;
struct user
{
	char name[100], fname[100], age[20];
}u;
void fpr_s(FILE *);


void main(void)
{
	cls
	printf("\n 1. Add user\n");
	printf(" 2. Read from files \n");
	char c = _getch();
	if (c == '1')
	{
		++i;
		fp = fopen("E:\\log.txt", "r+");
		fscanf(fp, "%d", &i);
		/* struct user* ptr;
		ptr = (struct user*)malloc(i * sizeof(struct user));

		printf("\n Enter name:  ");
		scanf(" %[^\n]s", ptr[i].name);

		printf("\n Enter Fathers name:  ");
		scanf(" %[^\n]", ptr[i].fname);

		printf("\n Enter age:  ");
		scanf(" %[^\n]s", ptr[i].age);

		printf("\n Thats what u entered:\n");
		puts(ptr[i].name);
		puts(ptr[i].fname);
		puts(ptr[i].age); 
	                           */
		printf("\n Enter name:  ");
		scanf(" %[^\n]s", u.name);

		printf("\n Enter Father's name:  ");
		scanf(" %[^\n]s", u.fname);

		printf("\n Enter age:  ");
		scanf(" %[^\n]s", u.age);

		fp = fopen("E:\\log.txt", "a");
		fprintf(fp, "%d\n%s\n%s\n%s\n",i, u.name, u.fname, u.age);
		printf("\n Data Entered successfully <Press any key>");
		_getch();
		main();
		}
	else
	{
		fp = fopen("E:\\log.txt", "r+");
		fpr_s(fp);
		_getch();
	}
}
void fpr_s(FILE *a)
{
	char ch;

	while (1)
	{
		ch = fgetc(a);
		if (ch == EOF)
			break;
		printf("%c", ch);
	}
}
