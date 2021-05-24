#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> grades;

	for(int i=1; i < 6; i++) {
		cout << "Enter student grade number " << i << " :\n";
		int grade = 0;

		cin >> grade;
		grades.push_back(grade);
	}

	int sum = 0;
	for(int i=0; i < grades.size(); i++) {
		sum += grades[i];
	}

	int average = sum / 5;
	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
	if(average >= 90)
		cout << "Excellent";
	else if(average >= 80)
		cout << "Very Good";
	else if(average >= 70)
		cout << "Good";
	else if(average >= 60)
		cout << "Fair";
	else if(average >= 50)
		cout << "Poor";
	else
		cout << "Fail";
	cout << endl;

	return 0;
}
