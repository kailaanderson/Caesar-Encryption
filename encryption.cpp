#include <iostream>
using namespace std;

//encrypting my name "Kaila Anderson" with the Caeser Cipher

int key = 418; //number to add to each letter
char name[] = "Kaila Anderson"; //text to be encrypted
int nameSize = 14;

int main() {
	//ouput text to be encrypted and the key
	cout << "Plaintext: " << name << endl; 
	cout << "Key: " << key << endl;

	//iterate through name and change letters
	for (int i = 0; i < nameSize; ++i) {
		if (name[i] == ' ') continue; //do nothing to whitespace

		int charNumber = name[i];
		if (charNumber < 97) charNumber += 32; //if uppercase, change to lowercase value

		charNumber += key; //add key to the character value

		while (charNumber > 122 || charNumber < 65) {
			//if value is less than 'a' (97) or greater than 'z' (122), add/subtract 26 (amount of letters in alphabet)
			if (charNumber > 122) { 
				charNumber -= 26;
			}
			else if (charNumber < 97) {
				charNumber += 26;
			}
		}
		
		name[i] = char(charNumber); //assign ciphertext to name array
	}

	//ouput ciphertext
	cout << "Ciphertext: " << name << endl;
}
