/*
 * Gas.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: Curtis
 */

#include "Gas.h"

using namespace std;

//***************************************************************
//    	GAS FEE CALCULATION
//****************************************************************

int Gas::gasChargeCalc(int a, int b)
{
	int sum;
	sum = a + b;
	return sum; // Added return statement (Code Quality)
}

double Gas::gasChargeCalc(int a, double b)
{
	double sum;
	sum = a + b; //initialize sum (Code Quality)
	return sum; // Added return statement (Code Quality)
}


void Gas::gasFeeCalculation()
{

	double gallons, charge = 0, total;
	const int fee = 15;
	int costUpTo6K = 2.35,
		costUpTo20K = 3.75,
		costOver20K = 6.00;

	system("cls");

   cout << "\n\n\n\tEnter the total number of gallons used, divided by 1000: ";
	cin >> gallons;

	if (gallons > 20){
		charge = (gallons - 20) * costOver20K;
		charge = charge + (14 * costUpTo20K);
		charge = charge + (6 * costUpTo6K);
	}
	else if (gallons > 6 && gallons <= 20){

		charge = (gallons - 6) * costUpTo20K; // Two equal signs (Code Quality)
		charge = charge + (6 * costUpTo6K);
	}
	else{

		charge = gallons * costUpTo6K;
	}

	total = gasChargeCalc(charge,fee);
	cout << "\n\n\n\tYou have used " << gallons << " thousand gallons of water." << endl;
	cout << "\n\n\n\tYour total water bill is $" << total; // Initialized total (Code Quality)

   getch();
}


Gas::Gas() {
	// TODO Auto-generated constructor stub

}

Gas::~Gas() {
	// TODO Auto-generated destructor stub
}

