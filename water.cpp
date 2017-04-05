#include <iostream>
#include <limits>
using namespace std;

#define BOTTLE 12

int main()
{
	cout <<"Minutes: ";
	int minutes{ -1 };	

	while( !(cin >> minutes) || minutes < 0 )
	{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            cout << "Retry: "
            << endl
            <<"Option: ";
        }

	int bottles = minutes * BOTTLE;

	cout << "Bottles: " << bottles;
	return 0;
}