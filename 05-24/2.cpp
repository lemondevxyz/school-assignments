#include <iostream>

using namespace std;

int main() {
	int x = 0;
	int y = 0;

	cout << "Enter two numbers" << endl;
	cin >> x;
	cin >> y;

	if(x > y) {
		int z = x;

		x = y;
		y = z;


		cout << "Swap" << endl;
	} else {
		cout << "Sum " << x + y << endl;

		return 0;
	}

	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

	return 0;
}
