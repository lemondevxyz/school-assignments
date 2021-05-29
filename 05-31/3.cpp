#include <iostream>

using namespace std;

bool isDigit(char c) { return c >= 48 && c <= 57; }
bool isUpper(char c) { return c >= 65 && c <= 90; }
bool isLower(char c) { return c >= 97 && c <= 122; }

int main() {
	char x;
	cout << "Enter a character\n";
	cin >> x;

	if(isDigit(x))
		cout << "It's a digit";
	else if(isUpper(x))
		cout << "It's an uppercase letter";
	else if(isLower(x))
		cout << "It's a lowercase letter";
	else
		cout << "It's a special character";

	cout << " - " << x << endl;

	return 0;
}
