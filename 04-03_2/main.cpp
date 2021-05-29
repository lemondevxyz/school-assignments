#include <iostream>
using namespace std;

#define FIRARG 5
#define SECARG 15
#define ADDDEF() (FIRARG + SECARG)

void answer_1() {
	// ascii code
	const char one = char(49);
	const char five = char(53);
	const char four = char(52);
	const char three = char(51);

	cout << one << five << endl;
	cout << three << one << four << endl;
}

void answer_2() {
	// well nothing happens
	// cout << int(65537) << endl;
	// unless you meant short then
	const unsigned short x = 65536;
	cout << x << endl;
	// it basically starts over
	// so 65536 becomes 0
	// 65537 becomes 1
	// 131070 would be 65535
	// and so on.
}

void answer_3() {
	cout << 'A' << endl;
}

void answer_4() {
	cout << char(65) << endl;
}

void answer_5() {
	const int x = 18;
	const int y = 89;

	const int z1 = x + y;
	const int z2 = x - y;
	const int z3 = x * y;
	const float z4 = x / y;

	cout << "sum: " << z1 << endl;
	cout << "substract: " << z2 << endl;
	cout << "multiplication: " << z3 << endl;
	cout << "division: " << z4 << endl;
}

int main() {
	cout << "Answer 1:" << endl;
	answer_1();
	cout << endl;

	cout << "Answer 2:" << endl;
	answer_2();
	cout << endl;

	cout << "Answer 3:" << endl;
	answer_3();
	cout << endl;

	cout << "Answer 4:" << endl;
	answer_4();
	cout << endl;
	
	cout << "Answer 5:" << endl;
	answer_5();
	cout << endl;

	cout << "Answer 6:" << endl;
	cout << ADDDEF();
	cout << endl; 

	return 0;
}
