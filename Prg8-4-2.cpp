#include<iostream>
using namespace std;

int main() {
	const int CAP = 10;
	int scores[CAP] = { 96,85,97,99,87,79,89,91,95,87 };

	int size = CAP;
	for (int i = 0; i < size; i++) {
		cout << scores[i] << " ";
	}
	cout << endl;
	for (int i = 4; i < size - 1; i++) {
		scores[i] = scores[i + 1];
	}
	size--;
	for (int i = 0; i < size; i++) {
		cout << scores[i]<<" ";
	}

	cout << endl;
	return 0;
}