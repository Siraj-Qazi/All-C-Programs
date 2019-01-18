#include <stdio.h>
#include <conio.h>
#define ya_phir ||
void main(void)
{

	system("cls");
	system("color 0b");
	printf("\n ############## X-CORP(c) LIVE UTILITY BILLING PORTAL ############\n\n");
	printf(" Please identify yourself :\n\n");
	printf(" Valid Reg. ID::  ");
	int regid;
	scanf_s("%d", &regid);
	if (regid != 681999)
	{
		system("color 0c");
		printf(" Fatal Error: Invalid or unregistered ID");
		_getch();
		main();
	}
	system("cls");
	system("color 0a");
	printf("\n ############## X-CORP(c) LIVE UTILITY BILLING PORTAL ############\n\n");
	printf(" Welcome to X-CORP Utility Billing portal.\n\n");
	int current_bal = 12440;
	printf(" Your current balance is Rs. %d\n", current_bal);
	printf("\n Enter the amount of Electricity bill to be paid(in PKR):  ");
	int elec_bill, gas_bill;
	scanf_s("%d", &elec_bill);
	printf("\n Enter the amount of SUI Gas bill to be paid(in PKR):  ");
	scanf_s("%d", &gas_bill);
	int total_bill = elec_bill + gas_bill;
	if (total_bill <= current_bal)
	{
		current_bal -= total_bill;
		printf("\n\n Bill paid successfully.\n");
		printf(" New balance is:: Rs. %d\n", current_bal);
		_getch();
		system("exit");
	}
	else if (total_bill > current_bal)
	{
		printf("\n\n Not enough balance to pay the bills.\n");
		printf(" Electricity Bill=  Rs. %d\n", elec_bill);
		printf(" SUI GAS Bill=  Rs. %d\n", gas_bill);
		printf(" Deficit:  Rs. %d\n\n", total_bill - current_bal);
		printf(" <PRESS ENTER>");
		_getch();
		system("cls");
		printf("\n ############## X-CORP(c) LIVE UTILITY BILLING PORTAL ############\n\n");
		printf("\n\n What would you like to do? (1 or 2)\n");
		printf("\n 1. Pay lesser of the two bills.\n");
		printf("\n 2. Exit\n ");
		int cho;
		scanf_s("%d", &cho);
		if (cho == 1)
		{
			int deficit = elec_bill - gas_bill;
			if (deficit > 0)
			{
				current_bal -= gas_bill;
				printf(" Gas bill has been deposited.\n");
				printf("\n Remaining balance::  Rs. %d\n", current_bal);
				printf("\n  Thankyou for using our service!\n");
				_getch();
			}
			else if (deficit < 0)
			{
				current_bal -= elec_bill;
				printf(" Electricity bill has been deposited.\n");
				printf("\n Remaining balance::  Rs. %d\n", current_bal);
				printf("\n  Thankyou for using our service!\n");
				_getch();
			}
			else if (deficit == 0)
			{
				printf(" The bills are equal lmao\n");
				_getch();
				system("exit");
			}
		}

		else
			printf(" Thankyou for using our service!\n");
		_getch();
	}
}