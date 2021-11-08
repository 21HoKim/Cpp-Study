#include<iostream>
using namespace std;
double function(double x) {
	return x * x + 3 * x - 5;
}
int input() {
	int x;
	cin >> x;
	return x;
}
int main() {
	int x;
	cout << "This programe is a function that calculates x * x + 3 * x - 5 : ";
	input();
	cout << function(x);
}