#include<iostream>
using namespace std;
int main() {
	int num;
	int id;
	cin >> num;
	do {
		id = num % 10;
		num - num / 10;
	} while (num > 0);
	cout << "ù°�ڸ����� : " << id << endl;
	return 0;
}