#include <iostream>
#include <limits>
using namespace std;

#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

int main(){
	//Prompt user for the amount of change owed
	cout << "O hai! How much change is owed?" << endl;
	
	//Get the input from the user
	double cash{ };
	while( !(cin >> cash) || cash < 0)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "How much change is owed?" << endl;
	}
	
	//Convert from $X.XX to XXX cents
	cash *= 100;
	
	//cast into an integer to remove the extra decimal 
	int change = int(cash);
	
	int coin { };
	int coin_buffer { };
	//Get the quarters
	if( change >= 25){
    	coin_buffer = change / QUARTER;
		coin += coin_buffer;
		change -= coin_buffer * QUARTER;
	}
	
	//Get the dimes
	if( change >= 10){
    	coin_buffer = change / DIME;
		coin += coin_buffer;
		change -= coin_buffer * DIME;
	}
	
	//Get the nickels
	if( change >= 5 ){
    	coin_buffer = change / NICKEL;
		coin += coin_buffer;
		change -= coin_buffer * NICKEL;
	}
	
	//Get the pennies
	if( change >= 1 ){
    	coin_buffer = change / PENNY;
		coin += coin_buffer;
		change -= coin_buffer * PENNY;
	}
	
	//Print the result
	cout << coin << endl;
}