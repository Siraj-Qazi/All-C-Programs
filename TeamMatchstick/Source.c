#include<stdio.h>
#include<conio.h>
int n, c, i = 0,j=0;
char cho;
int main() {
	system("cls");
	system("color 0b");
	printf("\n ");
	while (i++<3)
		printf("#######################################");
	printf("                                                   Matchstick Game v1.0\n");
	printf("                                               Programmed with Love <3 \n ");
	while (j++<3)
		printf("#######################################");
	printf("\n\n Welcome to the matchstick game!\n\n");
	printf("      \t*_* Instructions *_*\t\n");
	printf(" [+] You can choose a minimum of 1 and a maximum of four matches per turn.\n");
	printf(" [+] The computer then chooses between 1 to 4 matchsticks.\n");
	printf(" [+] Whoever has to pick the last matchstick loses. Good Luck!\n");
	printf("  \tLet's Begin!\n");
	int matches = 21;//Total number of matches
	loop:
	while (matches > 1)
	{
		system("color 0b");
		printf("\n How many matches do you want to pick?\n "); //Number of matches that the user has chosen
		if (!scanf_s("%d", &n))
		{
			error:
			system("color 0c");
			scanf_s("%*[^\n]");
			printf(" Invalid Entry. Please read the instructions again.\n\t <Press any key>\n");
			_getch();
			goto loop;
		}

		if (n >= 1 && n <= 4)
		{


			printf(" You have chosen %d match(es)\n", n);
			matches = matches - n;
			printf(" Matches left = %d\n", matches); //Number of matches left behind
			c = 5 - n; //The condition that ensures the computer always wins

			printf(" The computer has picked %d match(es)\n", c);//Number of matches picked by the computer
			matches = matches - c;
			printf(" You are left with %d match(s)\n", matches); //Number of matches left behind

			if (matches == 1)
			{
				system("color 0a");
				printf("\n ///////////////////////////\n");
				printf(" Ops! You lose (*_*), better luck next time!\n");
				printf(" ///////////////////////////\n");
				printf("\n\n Wanna play again (y/n)? ");
				fflush(stdin);
				scanf_s(" %c", &cho);
				if (cho == 'y' || cho == 'Y')
					main();
				else
					exit();
			}


		}
		else
			goto error;


	}

}
