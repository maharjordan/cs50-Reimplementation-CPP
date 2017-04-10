#include <iostream>
#include <limits>
using namespace std;

int main(){
	//Prompt the user for the pyramid height
	cout << "Height: ";
	//Get the value for height from the user
	int height{ };
	while( !(cin >> height) || height < 0 || height > 23)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		
		cout << "Retry: "
		<< endl
		<<"Option: ";
	}
	
	//Print the pyramid to the console
	for (int i = 0; i < height; i++){
		//Print the spaces
		for (int j = 0; j < height - i - 1; j++){
			cout << " ";
		}
		//Print the #s 
		for (int j = 0; j < i + 1; j++){
			cout << "#";
		}
		
		//Print the middle spaces
		cout << "  ";
		
		//Print the #s 
		for (int j = 0; j < i + 1; j++){
			cout << "#";
		}
		
		//end the row
		cout << endl;
		
	}
	
	return 0;
}