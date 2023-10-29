/*NEVIL BANK OF KENYA ATM Transaction*/
#include <stdio.h>

unsigned long amount=100000, deposit, withdraw,loan=20000;
int choice, pin, k,opening,card,cardno,loanA;
char transaction ='y';

void main()
{
	while (pin != 1323)
	{
printf("***********************************\n");
printf("* Welcome to Nevil Bank of Kenya           *\n");
printf("* HERE FOR THE PEOPLE OF AFRICA *\n");
printf("* please press one to continue                      *\n");
printf("***********************************\n");
scanf("%d",&opening);
if(opening==1)
printf("********************************************\n");
printf("* please place your card in the slot                               *\n");
printf("* press one if you have done so to proceed                   *\n");
printf("********************************************\n");
scanf("%d",&card);
if(card==1)
    while (cardno != 12345678)
{
printf("*****************************************************\n");
printf("* Note that your card number is 12345678            *\n");
printf("* Please reenter your card number for confirmation: *\n");
printf("*****************************************************\n");
scanf("%d",&cardno);
if(cardno != 12345678)
printf("PLEASE ENTER VALID CARD NUMBER\n");
}
		printf("*******************************\n");
        printf("*ENTER YOUR SECRET PIN NUMBER:*\n");
        printf("*******************************\n");
		scanf("%d", &pin);
		if (pin != 1323)
		printf("PLEASE ENTER VALID PASSWORD\n");
	}
	do
	{
		printf("******* WELCOME TO NEVIL BANK ATM SERVICES *************\n");
		printf("*        PLEASE ENTER A TRANSACTION TO PROCEED                         *\n");
		printf("*        1. CHECK MY ACCOUNT BALANCE                                               *\n");
		printf("*        2. WITHDRAW CASH                                                                          *\n");
		printf("*        3. DEPOSIT CASH                                                                                *\n");
		printf("*        4. APPLY LOAN                                                                                   *\n");
		printf("*        5. VIEW MY LOAN LIMIT                                                                 *\n");
		printf("*        6. VIEW LOAN BALANCE                                                                *\n");
		printf("*        7. EXIT                                                                                         *\n");
		printf("********************************************************\n\n");
		printf("Enter your choice:\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n YOUR BALANCE IS : %lu ", amount);
			break;
		case 2:
			printf("\n ENTER THE AMOUNT TO WITHDRAW: \n");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if (withdraw >(amount - 500))
			{
				printf("\n INSUFFICENT BALANCE");
			}
			else
			{
				amount = amount - withdraw;
				printf("\n\n PLEASE COLLECT CASH");
				printf("\n YOUR CURRENT BALANCE IS: %lu", amount);
			}
			break;
		case 3:
			printf("\n ENTER THE AMOUNT YOU WISH TO DEPOSIT:");
			scanf("%lu", &deposit);
                        amount = amount + deposit;
			printf("YOUR BALANCE IS: %lu", amount);
			break;
        case 4:
            printf("\n ENTER THE AMOUNT YOU WISH TO BORROW:");
            scanf("%d",&loanA);
            if (loanA %100 != 0)
		{

		    printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
		}
		    else if (loanA >(loan - 500))
            {
               printf("\n SORRY");
               printf("\n THE AMOUNT ENTERED IS ABOVE YOUR LOAN LIMIT");
            }
            else
            {
                amount = amount+loanA;
            printf("YOUR CURRENT BALANCE IS: %lu \n",amount);
            printf("PLEASE NOTE THAT THE LOAN IS DUE IN 30 DAYS\n");
            printf("AN INTEREST OF KSH ONE THOUSAND HAS BE ADDED");
            }
            break;
        case 5:
            loan = loan - loanA;
            printf("\n YOUR LOAN LIMIT IS: %lu ", loan);
            break;
        case 6:
            if (loanA > 0)
            {
            loanA = loanA + 1000;
            printf("\n YOUR CURRENT LOAN BALANCE IS: %lu", loanA);
            }
            else
            {
            loanA = loanA - loanA;
            printf("\n YOUR CURRENT LOAN BALANCE IS: %lu", loanA);
            }
		case 7:
			printf("\n THANK YOU FOR USING ATM");
			break;
		default:
			printf("\n INVALID CHOICE");
		}
		printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
	} while (!k);
	printf("\n\n THANKS FOR USING NEVIL BANK OF KENYA ATM SERVICES");
}
