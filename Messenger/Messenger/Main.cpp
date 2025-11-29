#include <iostream>
#include "sha256.h"

using namespace std;

void menu() {
	cout << "===Messenger===" << endl;
	cout << "1. Show all users" << endl;
	cout << "2. Create user" << endl;
	cout << "3. Create chat" << endl;
	cout << "4. Send message" << endl;
	cout << "0. Exit" << endl;
}

int main() {

	while (true) {
		menu();
		int input;
		cin >> input;
		string text;
		switch (input)
		{
		case 1:
			
			cin >> text;
			cout<<sha256(text);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 0:
			return 0;
		default:
			cout << "Wrong command" << endl;
			break;
		}
	}

	

	return 0;
}