#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int x;
	cout << (x = 12)<<endl;
	//printf("%d\n", (x = 13));
	//printf("%d\n", x);
	cout<<(double)x/1.1;
	return 0;
}