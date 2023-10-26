//	 HW1026.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include<stdio.h>
#include<stdlib.h>
#include <iostream>

//Init 3.17
int CreditCal();
//Init 3.18
int SaleCal();
//Init 3.19
int Interest();
//Init 3.20
int Salary();
//Init 3.33
int HallowRect();
//Init 4.15
int CompIntst();
//Init 4.16
int Tri();
//Init 4.27
int PythTri();
//Init 4.28
int WPay();
//Init 4.31
int Diamond();

int main()
{
	//3.17
	//CreditCal();
	//Init 3.18
	//SaleCal();
	//3.19
	//Interest();
	//3.20
	//Salary();
	//3.33
	//HallowRect();
	//4.15
	//CompIntst();
	//4.16
	//Tri();
	//4.27
	//PythTri();
	//4.28
	//WPay();
	//4.31
	Diamond();

	system("pause");
	return 0;
}

//3.17
int CreditCal() {
	int accountnum = 0;
	float beginbal = 0, ttlcharge = 0, ttlcredit = 0, creditlmt = 0;

	printf("Enter account number (-1 to end): ");
	scanf("%d", &accountnum);
	while (accountnum >= 0) {
		printf("Enter biginning balance: ");
		scanf("%f", &beginbal);
		printf("Enter total charges: ");
		scanf("%f", &ttlcharge);
		printf("Enter total credits: ");
		scanf("%f", &ttlcredit);
		printf("Enter credit limit: ");
		scanf("%f", &creditlmt);

		printf("\nAccount: %d", accountnum);
		printf("\nCredit limit: %.2f", creditlmt);
		printf("\nBalance: %.2f", beginbal + ttlcharge - ttlcredit);
		if (beginbal + ttlcharge - ttlcredit > ttlcredit) {
			printf("\nCredit Limit Exceeded. \n");
		}
		printf("\nEnter account number (-1 to end): ");
		scanf("%d", &accountnum);
	}
	return 0;
}

//3.18
int SaleCal() {
	float sales = 0, salary = 0;
	printf("Enter sales in dollars (-1 to end): ");
	scanf("%f", &sales);
	while (sales >= 0) {
		printf("Salary is: $ %.2f", sales * 0.09 + 200);
		printf("\n\nEnter sales in dollars (-1 to end): ");
		scanf("%f", &sales);
	}

	return 0;
}

//3.19
int Interest() {
	float loan = 0, intst = 0;
	int days = 0;
	printf("Enter loan principal (-1 to end): ");
	scanf("%f", &loan);
	while (loan >= 0) {
		printf("Enter interest rate: ");
		scanf("%f", &intst);
		printf("Enter terms of the loan in days: ");
		scanf("%d", &days);

		printf("The interest charge is %.2f", loan*intst*days/365.0);
		printf("\n\nEnter loan principal (-1 to end): ");
		scanf("%f", &loan);
	}
	return 0;
}

//3.20
int Salary() {
	float hours = 0, rate=0;
	printf("Enter # of hours worked (-1 to end): ");
	scanf("%f", &hours);
	while (hours >= 0) {
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &rate);

		printf("Salary is %.2f", hours*rate);
		printf("\n\nEnter # of hours worked (-1 to end): ");
		scanf("%f", &hours);
	}
	return 0;
}

//3.33
int HallowRect() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 12; j++) {
			if (i == 0 || i == 2 || j == 0 || j == 11) {
				printf("+");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");

	}
	return 0;
}

//4.15
int CompIntst() {
	float a=5000, b=5000, c=5000, d=5000, e=5000;
	for (int i = 0; i < 15; i++) {
		a = a * 1.10;
		b = b * 1.105;
		c = c * 1.11;
		d = d * 1.115;
		e = e * 1.12;
	}
	printf("For Interest Rate 10% = %.2f", a);
	printf("\nFor Interest Rate 10.5% = %.2f", b);
	printf("\nFor Interest Rate 11% = %.2f", c);
	printf("\nFor Interest Rate 11.5% = %.2f", d);
	printf("\nFor Interest Rate 12% = %.2f", e);
	return 0;
}

//4.16
int Tri() {
	// (1)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	// (2)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10-i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	// (3)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 10 - i; k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	// (4)
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <9-i; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//4.27
int PythTri() {
	int max_hypo = 500;
	for (int a = 1; a <= max_hypo; a++) {
		for (int b = a; b <= max_hypo; b++) {
			int c = a * a + b * b;
			int hypo = sqrt(c);

			if (hypo <= max_hypo && hypo * hypo == c) {
				printf("Side 1: %d, Side 2: %d, Hypotenuse: %d\n", a, b, hypo);
			}
		}
	}
	return 0;
}

//4.28
int WPay() {
	int type =0, piece=0;
	float pay = 0, hour=0,sales=0;
	printf("Enter Employee Paycode: ");
	scanf("%d", &type);
	
	switch (type) {
	case 1:
		printf("Enter Weekly Salary : ");
		scanf("%f", &pay);
		printf("Weekly Pay for Manager is : %.2f", pay);
		break;
	case 2:
		printf("Enter Hourly Salary : ");
		scanf("%f", &pay);
		printf("Enter Total Work Hour : ");
		scanf("%f", &hour);
		if (hour > 40) {
			printf("Weekly Pay for Hourly Worker is : %.2f", pay*40 + 1.5*pay*(hour-40));
		}
		else {
			printf("Weekly Pay for Hourly Worker is : %.2f", pay*hour);
		}
		break;
	case 3:
		printf("Enter Weekly Sales : ");
		scanf("%f", &sales);
		printf("Weekly Pay for Commission Worker is : %.2f", 0.057*sales + 250);
		break;
	case 4:
		printf("Enter Weekly Piece : ");
		scanf("%d", &piece);
		printf("Enter Pay Per Piece : ");
		scanf("%f", &pay);
		printf("Weekly Pay for Pieceworker is : %.2f", piece*pay);
		break;
	default:
		printf("ERROR");
	}
	return 0;
}

//4.31
int Diamond (){
	for (int i = 1; i <= 9; i += 2) {
		for (int j = 1; j <= 9 - i; j += 2) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 9 - 2; i >= 1; i -= 2) {
		for (int j = 1; j <= 9 - i; j += 2) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}