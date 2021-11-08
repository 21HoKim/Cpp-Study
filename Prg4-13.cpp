#include<iostream>
using namespace std;
int main() {
	char grade;
	cout << "Enter a grade (A,B,C,D,F) : ";
	cin >> grade;
	switch (grade) {
	case 'A':
	case 'B':
	case 'C': cout << "Grade is pass";
		break;
	case 'D':
	case 'F': cout << "Grade is nopass";
		break;
	default: cout << "Error in the input. Try again.";
	}
	return 0;
}