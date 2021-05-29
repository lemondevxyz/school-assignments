#include <iostream>

using namespace std;

bool valid(char c) { return c == '+' || c == '-' || c == '*' || c == '/'; }

float result(float x, float y, char op) {
	switch(op) {
		case '+': return x + y;
		case '-': return x - y;
		case '*': return x * y;
		case '/': return x / y;
	}

	return 0;
}

int main() {
	float x = 0;
	float y = 0;
	char op = 0;

	cout << "Enter first number" << endl;
	cin >> x;

	cout << "Enter operation character(+ - * /)" << endl;
	cin >> op;
	if(!valid(op)) {
		cout << "Invalid operation" << endl;
		return 0;
	}

	cout << "Enter second number" << endl;
	cin >> y;

	if(valid(op))
		cout << x << ' ' << op << ' ' << y << " = " << result(x, y, op) << endl;
	else
		cout << "Invalid operation" << endl;

	return 0;
}
