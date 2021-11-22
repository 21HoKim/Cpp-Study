#include<iostream>
using namespace std;
void print(int num[], int size) {
	for (int i = 0; i < size; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
}
void mulByTwo(int num[], int size) {
	for (int i = 0; i < size; i++) {
		num[i] = num[i] * 2;
	}
}
void reverseArray(int num[], int num2[], int size) {
	for (int i = 0; i < size; i++) {
		//num[i] = num2[size - 1 - i];
		num2[size - 1 - i] = num[i];
	}
}
void swapArray(int num[], int size, int i, int j ) {
	int temp;
	temp = num[i];
	num[i] = num[j];
	num[j] = temp;
}
void deleteArr(int num[], int size, int  i) {

}
void insertArray(int num[],int size,int i, int value) {
	int temp;
	for (int j = i; j < size; j++) {
		temp = num[j+1];
		num[j + 1] = num[j];
	}
}
int main() {
	const int CAP = 10;
	int num[CAP] = { 1,2,3,4,5 };
	int num2[CAP];
	int size = 5;
	/*for (int i = 0; i < size; i++) {
		cout << num[i] <<" ";
	}
	cout << endl;*/
	int i, j,value;
	i = 2, j = 3,value=3;
	print(num, size);
	mulByTwo(num, size);
	print(num, size);
	reverseArray(num, num2, size);
	print(num2, size);
	swapArray(num, size, i, j);
	deleteArr(num, size, i);
	insertArray(num, size, i, value);
	return 0;
}