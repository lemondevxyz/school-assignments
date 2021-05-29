#include <cstdio>
#include <cstring>

int solve_1() {
	int x, y, z;

	printf("Enter X: \n");
	scanf("%d", &x);
	printf("Enter Y: \n");
	scanf("%d", &y);
	printf("Enter Z: \n");
	scanf("%d", &z);

	return x * y * z;
}

void solve_2() { } // what??

void solve_3() {}
// 1. No
// 2. No - cout << "\n\n\n";

void solve_4() {
	int x;

	printf("Enter five digit number: \n");
	scanf("%d", &x);

	char s[64];

	sprintf(s, "%ld", x);

	for(int i=0; i < 64; i++) {
		const char v = s[i];
		if(v == '\0')
			// empty character
			break;

		printf("%c\t", v);
	}
	printf("\n");
}

int main() {
	printf("program number one: %d\n", solve_1());
	
	printf("program number four: \n");
	solve_4();
}
