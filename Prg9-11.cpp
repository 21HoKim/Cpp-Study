#include<iostream>

using namespace std;

void reverseArr(int *arr, int size) {
	int temp;
	for (int i = 0; i < size/2; i++) {
		temp = *(arr + i);
		*(arr + i) = *(arr + size - 1 - i);
		*(arr + size - 1 - i) = temp;
	}
}
void add(int (*arr)[5], int a, int b) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			*(*(arr + i)+j) +=1;
		}
	}
}
int main() {
	/*const int CAP = 10;
	int arr[CAP] = { 1,2,3,4,5,6,7,8,9,10 };
	reverseArr(arr, CAP);
	for (int i = 0; i < CAP; i++) {
		cout << arr[i]<<" ";
	}*/
	int arr[3][5] = { {1,2,3,4,5},
					  {6,7,8,9,10},
					  {11,12,13,14,15}
					};
	add(arr,3,5);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}