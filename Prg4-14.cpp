#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	int larger;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	larger = num1 >= num2 ? num1 : num2;
	cout << "The larger is: " <<larger;
	return 0;
}