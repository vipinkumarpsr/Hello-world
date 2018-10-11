#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

class bank{
	char name[20];
	char *type;
	double account;
	float balance;

public:
	 bank(){
	  balance=0;
	 }
	void deposit(){
		int amount;
		cout<<"How much amount you would like to deposit?";
		cin>>amount;
		balance=balance+amount;
	}

	void getdata()
	{       int n;
		cout<<"\nPlease Enter your name:- ";
		gets(name);
		cout<<"\nEnter account type(press 1 for saving and 2 for current):- ";
		cin>>n;
		if(n==1)
		{
		type="saving account";
		}
		else
		{
		type="current account";

		}

		cout<<"\nNow please Enter you account number :- ";
		cin>>account;

	}

	void withdraw()
	{
		float amount;
		cout<<"\nEnter the amount you want to withdraw :- ";
		cin>>amount;
		if(amount>balance)
		{
			cout<<"\nYou have insuficiant balance please try again later after depositing!!!";
		}
		else
		{
			cout<<"\nYou have successfully withdrawn "<<amount;
			balance=balance-amount;
			cout<<"\nRemaining balance is "<<balance;
		}
	}

void display()
{
	cout<<"\nAccount holder name:\t"<<name;
	cout<<"\nAccount number:\t"<<account;
	cout<<"\nAvailable Balance\t"<<balance;
}

};


void main()
{
	char ch='y';
	int c;
	bank x;
	clrscr();
	cout<<"\nPlease Enter the details first\n";
	x.getdata();
	while(ch=='Y'||ch=='y')
	{
	cout<<"Now, Please enter the function you want to operate\n1.Display A/C details\n2.Input details\n3.Withdraw amount\n4.deposit"<<endl;
	 cin>>c;
	switch(c){

		case 1:	x.display();
			break;
		case 2: x.getdata();
			break;
		case 3: x.withdraw();
			break;
		case 4: x.deposit();
			break;
		default: cout<<"Please input valid options!!! ";

	}
	cout<<"\nWant to do more?	";
	cin>>ch;

	}
getch();
}