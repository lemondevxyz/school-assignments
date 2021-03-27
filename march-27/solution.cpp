#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

vector<char *> writeArray = {
	(char *)"Programming Lab 1",
	(char *)"Computer Programming I",
	(char *)"Student Name: ???",
	(char *)"Date: 27/03/1988", // DD/MM/YY
};

// repeat prints a character count amount of times
void repeat(char input, int count) {
	for(int i=0; i < count; i++)
		printf("%c", input);
}

// printRow prints a row of stars..
void printRow(int stars) {
	repeat('*', stars);
	printf("\n");
}

int main() {
	int stars = 0;

	for(int i=0; i < writeArray.size(); i++) {
		 const char * v = writeArray.at(i);
		 const int len = strlen(v);

		 if(len > stars) {
			 stars = len;
		 }
	}
	stars += 4;

	printRow(stars);
	for(int i=0; i < writeArray.size(); i++) {
		 const char * v = writeArray.at(i);
		 const int len = (stars-3) - strlen(v);

		 printf("* %s", v);
		 repeat(' ', len);
		 printf("*\n");
	}
	printRow(stars);

}
