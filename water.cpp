#include <iostream>
#include <limits>
#include <cstring>
using namespace std;

#define BOTTLE 12
#define title "Shower Water Usage Calculator"

void print_title(string input_title);

int main()
{	
	
	print_title(title);
	cout <<"How long is your average shower in minutes?: ";
	double minutes{ -1 };	

	while( !(cin >> minutes) || minutes < 0 )
	{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            cout << "Retry: "
            << endl
            <<"Option: ";
        }

	double bottles = minutes * BOTTLE;
	double bottles_year = 365 * bottles;
    //Using Canadian life expectency of 81.24 years (Source World Bank)
    long bottles_life = 81.24 * (int)bottles_year;
    
    cout << "Your expected usage of water in bottles from showering is:" << endl;
    cout << "----------------------------------------------------------" << endl;
	cout << "Per Shower: " << bottles <<endl;
	cout << "Per Year:   " << bottles_year << endl;
	cout << "Life-time:  " << bottles_life << endl;
	return 0;
}

//Prints an Asterisk border around a string of text
void print_title(string input_title){
    //Get the length of the string
    int len = input_title.size();
    
    //Print the top line
    for(int i = 0; i < len + 4; i++){
        cout << '*';
    }
    cout << endl;
    
    //Print the side border
    cout << "* ";
    
    for (int i = 0; i < len; i++){
        cout << " ";   
    }
    
    cout << " *" << endl;
    
    //Print the title
    cout << "* " << input_title << " *" << endl;
    
    //Print the side border
    cout << "* ";
    
    for (int i = 0; i < len; i++){
        cout << " ";   
    }
    
    cout << " *" << endl;
    
    //Print the bottom border
    for(int i = 0; i < len + 4; i++){
        cout << '*';
    }
    cout << endl;
    
    
    
    
}
