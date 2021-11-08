#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a, b;
	printf("행과 열을 입력하라 : ");
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout <<setw(3)<< j;
		}
		cout << endl;
	}
	return 0;
}