#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

long long get_long_long();
int digits(long long x);
int digit_spec(long long x, int pos);

int main(){
	//Prompt the user for a credit card number
	cout << "Number: ";
	long long cNumber = get_long_long();
	
	/*
	Credit Card Checks
		Digits
			Visa 				13 16
			Mastercard 			16
			American Express 	15
		Starting Numbers
			Visa 				 4
			Mastercard 			51 52 53 54 55
			American Express 	34 37
	*/
	
	//Test the number of digits
	int digit_num = digits(cNumber);
	
	if( digit_num < 13 || digit_num > 16 || digit_num == 14){
		cout << "INVALID" << endl;
		return 0;
	}
	
	
	
	return 0;
}

//Function that returns a long long via cin
long long get_long_long(){
	
	long long long_long{ };
	
	while( !(cin >> long_long))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid Input. Retry: ";
	}
	
	return long_long;
}

int digits(long long x){
	//Get the log of the number and add one to it
	double log = log10(x);
	log ++;
	//Cast it as an int to truncate the decimals
	int digit = int(log);
	
	return digit;
}

int digit_spec(long long x, int pos){
	int digit_num = digits(x);
	if (pos > digit_num || pos < 1){
		return -1;
	}
	
	pos = digit_num - pos + 1;
	
	int base = pow(10, pos - 1);
	
	x /= base;
	x %= 10;
	
	return (int)x;
}
