#include<iostream>
using namespace std;
int main() {
	int x = 10, y = 20;
	y += x *= 40;
	cout << "Value of x : "<<x<<endl<<"Value of y : "<<y<<endl;
	return 0;
}