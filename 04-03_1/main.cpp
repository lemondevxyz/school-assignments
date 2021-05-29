#include <iostream>
using namespace std;

int main() {
	string name[4] = {"Lemon", "Dev", "MF", "Doom"};
	
	for(int i=0; i < 10; i++) {
		for(int j=0; j < 4; j++) {
			cout << name[j] << "\n";
		}
	}

	return 0;
}
