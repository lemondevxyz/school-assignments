#include <iostream>

using namespace std;

int main() {
	int x = 0;
	cout << "Enter a number amigo!" << endl;
	cin >> x;

	if(x < 0)
		cout << "Negative: ";
	else if(x > 0)
		cout << "Positive: ";
	else {
		cout << "Zero" << endl; 
		return 0;
	}

	cout << x << endl;

	return 0;
}
