#include<stdio.h>
#include<conio.h>
int c;
char n,cho;
int main() {
	system("cls");
	system("color 0b");
	printf("\n  #######################################################################\n");
	printf("                           Matchstick Game v1.0\n");                //Name of Game
	printf("                          Programmed with Love <3 \n");
	printf("  #######################################################################\n\n");
	printf("\n Welcome to the matchstick game!\n\n");
	printf("      \t*_* Instructions *_*\t\n");
	printf(" [+] You can choose a minimum of 1 and a maximum of four matches per turn.\n");
	printf(" [+] The computer then chooses between 1 to 4 matchsticks.\n");
	printf(" [+] Whoever has to pick the last matchstick loses. Good Luck!\n");
	printf("  \tLet's Begin!\n");
	int matches = 21;                                                 //Total number of matches

	while (matches > 1)
	{
		system("color 0b");
		printf("\n How many matches do you want to pick?\n ");        //Number of matches that the user has chosen
		scanf_s(" %c", &n);

		if (n >= 48 && n <= 57)
		{
			
			int j = n - 48;
			if (j >= 1 && j <= 4)
			{

				printf(" You have chosen %d match(es)\n", j);
				matches = matches - j;
				printf(" Matches left = %d\n", matches);               //Number of matches left behind
				c = 5 - j;                                             //The condition that ensures the computer always wins

				printf(" The computer has picked %d match(es)\n", c);  //Number of matches picked by the computer
				matches = matches - c;
				printf(" You are left with %d match(s)\n", matches);   //Number of matches left behind

				if (matches == 1)
				{
					system("color 0a");
					printf("\n ///////////////////////////////////////////\n");
					printf(" Ops! You lose (*_*), better luck next time!\n");
					printf(" ///////////////////////////////////////////\n");
					printf("\n\n Wanna play again (y for yes)? ");
					fflush(stdin);
					scanf_s(" %c", &cho);
					if (cho == 'y' || cho == 'Y')
						main();
				}
			}
			else
			{
				system("color 0c");
				printf(" Invalid Entry. Please read the instructions again!\n\t <Press any key>\n");
				_getch();
			}

		}
		else
		{
			system("color 0c");
			printf(" Please enter a number, not a character!\n\t <Press any key>\n");
			fflush(stdin);
			_getch();
		}


	}

}
