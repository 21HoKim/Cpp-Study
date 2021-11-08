#include<iostream>
#include<limits>
using namespace std;
int main() {
	int num3 = numeric_limits<int> ::max();
	int num4 = numeric_limits<int>::min();
	cout << "int num3 max : " << num3 << endl;
	cout << "int num4 min : " << num4 << endl;
	num3++;
	num4--;
	cout << "The value of num3 + 1 after overflow : " << num3 << endl;
	cout << "The value of num4 - 1 after underflow : " << num4 << endl;
	return 0;
}