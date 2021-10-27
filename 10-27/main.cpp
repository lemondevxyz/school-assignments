#include <iostream>
using namespace std;

float add_and_divide(float x, float y, float z) {
	return (x + y) / z;
}

string is_less_than_9(char x) {
 return int(x) <= 9 ? "true" : "false";
}

int main() {
	float x, y, z;
	cout << "Enter A Number" << endl; cin >> x;
	cout << "Enter A Number" << endl; cin >> y;
	cout << "Enter A Number" << endl; cin >> z;
	cout << "Result of addition and division: " << add_and_divide(x, y, z) << endl;
	char c = 0;
	cout << "Enter A Character" << endl; cin >> c;
	cout << "Is the character less than or equal to 9: " << is_less_than_9(c) << endl;
}
