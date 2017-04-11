#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main(){
	//Get the name from the user
	string name;
	string initials{""};
	getline (cin, name);
	int len = name.length();
	
	//Get the initials
	for( int i = 0; i < len - 1; i++){
		char let_one = name[i];
		char let_two = name[i + 1];
		
		//If on the first character, test to see if it is a letter
		if( i == 0 ){
			if ( isalpha(let_one) ){
				initials += let_one;
			}
		}
		//If the previous letter was a space, check to see if the next is a letter
		else{
			if( let_one == ' ' && isalpha(let_two) ){
				initials += let_two;
			}
		}
	}
	
	cout << initials << endl;
	
	return 0;
}
