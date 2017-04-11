#include <iostream>
#include <string>

int main(int key){
	string plaintext;
	
	cout << "plaintext: ";
	getline(cin, plaintext);
	cout << "ciphertext: " << cipher(plaintext, key) << endl;
	
}

string cipher(string plain, int cip_key){
	int len = plain.length();
	string ciphertext = { "" };
	for (int i = 0; i < len; i++){
		char x = plain[i];
		if(x >= 65 && x <= 92){
			x -= 65;
			x = (x + cip_key) % 26;
			x += 65;
			ciphertext += x;
		}
		else if(x >= 97 && x <= 122){
			x -= 97;
			x = (x + cip_key) % 26;
			x += 97;
			ciphertext += x;
		}
		else{
			ciphertext += x;
		}
	}
	return ciphertext;
}
