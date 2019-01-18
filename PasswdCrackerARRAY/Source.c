#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(void)
{
	int i, j, k, l, m;
	char pwd[5];
	printf("##### Password Cracker v1.0 #####\n\n");
	printf("Enter your 4-Character password: \n");
	scanf_s("%4s", pwd);
	char crack[] = "AAAA";
	for (j = 65; j <= 90; j++)
	{
		for (k = 65; k <= 90; k++)
		{

			for (l = 65; l <= 90; l++)
			{
				for (m = 65; m <= 90; m++)
				{
					if ((strcmp(crack, pwd)) == 0)
					{
						printf("\n\n  Password FOUND!\n\n");
						printf("  KEY: [ %s ]\n", crack);
						_getch();
						exit();
					}
					printf(" Trying Password... %c%c%c%c\n", j, k, l, m);
					crack[0] = j;
					crack[1] = k;
					crack[2] = l;
					crack[3] = m;
				}
			}
		}
	}
	printf("\n Decryption failed. \n\n");
	_getch();
}