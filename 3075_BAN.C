#include<stdio.h>
#include<conio.h>
int list();
void deposite();
void transfer();
void withdraw();
void check();
void last();
int totalamount=1000,amount,amo,tr,totaldep=0,totalwith=0,totaltr=0;
int ac;
char a[50];
void main()
{
	clrscr();
	printf("\nenter your name: ");
	gets(a);
	printf("\nenter your account number: ");
	scanf("%d",&ac);
	while(1)
	{
	 clrscr();
		switch(list())
		{
			case 1:
				deposite();
				totaldep+=amount;
				break;

			case 2:
				withdraw();
				if(amo<=totalamount)
				{
					totalwith+=amo;
				}
				break;
			case 3:
				transfer();
				if(tr<=totalamount)
				{
					totaltr+=tr;
				}
				break;

			case 4:
				check();
				break;
			case 5:
				clrscr();
				last();
				getch();
				exit(0);
			default:
			printf("\ninvalid choice");
		}
		getch();

	}

}
int list()
{
	int ch;
	printf("\n1. deposite amount: ");
	printf("\n2. withdraw amount: ");
	printf("\n3. transfer amount: ");
	printf("\n4. check detail: ");
	printf("\n5. exit: ");
	printf("enter your choice: ");
	scanf("%d",&ch);
	return(ch);
}
void deposite()
{
	printf("how many amount you want to deposite: ");
	scanf("%d",&amount);
	totalamount+=amount;
}
void withdraw()
{
	printf("how many amount yoou want to withdraw: ");
	scanf("%d",&amo);
	if(amo<=totalamount)
	{
		totalamount-=amo;
	}
	else
	printf("highest amount withdraw not possible");
}
void transfer()
{
	printf("how many amount you want to transfer: ");
	scanf("%d",&tr);
	if(tr<=totalamount)
	{
		totalamount-=tr;

	}
	else
	{
		printf("highest tarnsfer amount not possible: ");
	}
}
void check()
	{
		printf("\ntotal amount=%d",totalamount);
		printf("\ntotal deposite amount=%d",totaldep);
		printf("\ntotal withdraw amount=%d",totalwith);
		printf("\ntotal transfer amount=%d",totaltr);
	}

void last()

	{
		printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
		printf("\naccount number=%d",ac);
		printf("\nname=%s",a);
		printf("\ntotal amount=%d",totalamount);
		printf("\ntotal deposite amount=%d",totaldep);
		printf("\ntotal withdraw amount=%d",totalwith);
		printf("\ntotal transfer amount=%d",totaltr);
		printf("\n***********THANK YOU FOR VISITING*******");
	}

