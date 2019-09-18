/*
 * Service.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: Curtis
 */

#include "Service.h"

using namespace std;

void Service::createService()
{
	cout<<"\nPlease Enter The Service Number ";
	cin>>customer_number;
	cout<<"\nPlease Enter The Name of The Service ";
	cin>>name;
	cout<<"\nPlease Enter The Price of The Service ";
	cin>>serviceVar;
	cout<<"\nPlease Enter The Discount (%) ";
	cin>>discount;
 }

void Service::showService()
{
	 cout<<"\nThe Service Number : "<<customer_number;
	 cout<<"\nThe Name of The Service : ";
	 puts(name);
	 cout<<"\nThe Price of The Service : "<<serviceVar;
	 cout<<"\nDiscount : "<<discount;
 }

void Service::storeService(void)
{
	service_number = new int;
	service_buff = (char *)malloc(10);
	number_array = new int[10];

	// Code has no effect (Code Quality)
	//service_buff == service_buff;
	//service_number == service_number;
	//number_array == number_array;
}

void Service::returnServiceNumber(void)
{
	cout << INT_MAX+1; // Overflow in expression, integer error (Integer)
}


Service::Service() {
	// Initialized variables (Code Quality)
	customer_number = 0;
	service_number = NULL;
	service_buff = NULL;
	number_array = NULL;
	serviceVar = 0.0;
	qty = 0.0;
	tax = 0.0;
	discount = 0.0;

}

Service::~Service() {
	// Delete pointers (Memory Management)
	service_number = NULL;
	service_buff = NULL;
	number_array = NULL;
	delete service_number;
	delete service_buff;
	delete number_array;
}

