#include "DateTime.h"
#include<iostream>

using namespace std;

int DateTime:: getYear(){
	return year;
}

int main(){
	DateTime dateTime;
	dateTime.year = 2000;
	int year = dateTime.getYear();
	cout << year << endl;
	return 0;
}