#include<iostream>
#include<limits>
using namespace std;
int main() {
	unsigned int num1 = numeric_limits<unsigned int> ::max();
	unsigned int num2 = numeric_limits<unsigned int> ::min();

	cout << "unsigned num1 max : "<<num1<<endl;
	cout << "unsigned num2 max : "<<num2<<endl;

	num1 += 1;
	num2 -= 1;

	cout << "The value of num1 + 1 after overflow : " << num1 << endl;
	cout << "The value of num2 - 1 after underflow : " << num2 << endl;
	return 0;
}