#include <iostream>
#include <vector>
#include <string>

using namespace std;
//printing text prompting users to input text
void printMenu() {
	cout << "Input text to cypher: ";
}
//cyphering function that translates text using cypher key and prints encoded message
void cypher () {
	vector<char> cypher({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
	string text;
	int current;
	char upper;

	getline(cin, text);
	cout << "Encoded Message: ";
	
	for (int i = 0; i <= text.length(); i++) {
		if (text[i] >= 65 && text[i] <= 90) {
			current = text[i] - 65;
			cout << cypher[current];
		}
		else if (text[i] >= 97 && text[i] <= 122) {
			text[i] = text[i] - 32;
			upper = cypher[text[i] - 65] + 32;
			cout << upper;
		}
		else {
			cout << text[i];
		}
	}
}

int main() {
	printMenu();
	cypher();
}
