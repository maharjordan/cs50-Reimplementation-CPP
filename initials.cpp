#include <iostream>
#include <limits>
#include <string>
using namespace std;

string initials(string name);

int main(){
	//Get the name from the user
	string name;
	getline (cin, name);
	
	cout << initials(name) << endl;
	
	return 0;
}

string initials(string name){
	string inits{""};
	int len = name.length();
	
	//Get the initials
	for( int i = 0; i < len - 1; i++){
		char let_one = name[i];
		char let_two = name[i + 1];
		
		//If on the first character, test to see if it is a letter
		if( i == 0 ){
			if ( isalpha(let_one) ){
				inits += toupper(let_one);
			}
		}
		//If the previous letter was a space, check to see if the next is a letter
		else{
			if( let_one == ' ' && isalpha(let_two) ){
				inits += toupper(let_two);
			}
		}
	}
	
	return inits;
}
