/* create a multiplication function without using the operator */
#include <iostream>

using namespace std;

int mul(int x, int y) {

	int sum = 0;
	if(y > 0) {
		for(int i=0; i < y; i++)
			sum += x;
	} else if (y < 0) {
		for(int i=y; i < 0; i++) {
			sum = sum - x;
		}
	}


	return sum;
}

int main() {
	cout << mul(5, 3) << "\n";
	cout << mul(5, -3) << "\n";
	cout << mul(5, 0) << "\n";
}
