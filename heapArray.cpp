#include<iostream>
using namespace std;
void init(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = i + 10;
	}
}
void print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
int main() {
	/*int size;
	int* arr;
	cout << "비열의 크기를 입력하세요 : ";
	cin >> size;
	arr = new int[size];
	

	init(arr, size);
	print(arr, size);
	delete arr;*/
	int a, b;
	cin >> a >> b;
	int** arr = new int* [a];
	for (int i = 0; i < a; i++) {
		arr[i] = new int[b];
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}