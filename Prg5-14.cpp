#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a, b;
	printf("��� ���� �Է��϶� : ");
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout <<setw(3)<< j;
		}
		cout << endl;
	}
	return 0;
}