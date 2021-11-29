#include<iostream>

using namespace std;

int main() {

	const int CAP = 5;
	int arr[CAP];

	for (int i = 0; i < CAP; i++) {
		arr[i] = 10 + i;
	}
	for (int i = 0; i < CAP; i++) {
		cout << "arr["<<i<<"]"<<":"<<arr[i] << endl;
	}
	for (int i = 0; i < CAP; i++) {
		cout <<"&arr["<<i<<"] : " <<&arr[i] << endl;
	}
	return 0;
}