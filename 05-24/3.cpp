#include <iostream>

using namespace std;

bool isSmall(char x) {
	return x >= 97 && x <= 122;
}

bool isBig(char x) {
	return x >= 65 && x <= 90;
}

bool isLetter(char x) {
	return isBig(x) || isSmall(x);
}

char transform(char x) {
	if(isSmall(x)) {
		x = x - 32;
	} else if(isBig(x)) {
		x = x + 32;
	}

	return x;
}

int main() {
	cout << "Enter character" << endl;

	char x;
	cin >> x;

	cout << transform(x) << endl;
}
