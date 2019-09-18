/*
 * Login.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: Curtis
 */

#include "Login.h"

using namespace std;

void Login::enterPassword(void){

	puts("Enter 8 character password");
	gets(Password);
}

void Login::copyUsername(string str1, string str2){
	strcpy(name, str1.c_str());
	strcat(name, " = ");
	strcpy(name, str2.c_str()); //Unbounded string copy and concatenation (Strings), changed strcat to strcpy
	cout << name;

}

int Login::copyPassword(){
	strcpy(a, "copypassword");
	strcpy(b, "copypassword");
	strcpy(c, a);
	strcat(c, b);
	printf("a = %s\n", a);
	return 0;

}

int Login::testUsernamePassword(void) {
	arg1 = (char *)"Test Username and Password."; // Fixed deprecation (Code Quality)

	while (arg1[i] != '\0') {
		buff[i] = arg1[i];
		i++;
	}
	buff[i] = '\0';
	printf("buff=%s\n", buff);
	return 0; // Added return statement (Code Quality)

}

void Login::isPasswordOK(void) {

	puts("Enter Password");

	gets(passwordCheck);
	PwStatus = (strcmp(passwordCheck, "goodpass") == 0);
	if (PwStatus == false) {
		puts("Access Denied");
	}
	else {
		puts("Access Granted");
	}

}

Login::Login() {
	// Initializing variables (Code Quality)
	PwStatus = false;
	arg1 = NULL;
	i = 0;

}

Login::~Login() {
	// Deleting pointer (Memory Management)
	arg1 = NULL;
	delete arg1;
}

