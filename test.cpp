#include<iostream>
#include<ctime>
#include<ctime>
using namespace std;

int main() {
	srand(time(0));
	int temp;
	int set;
	int sum = 0;
	for (int i=0;i<5;i++) {
		set = 0;
		for (int j = 0; j < 10; j++) {
			temp = rand() % 90 + 10;
			//cout << temp << " ";
			set += temp;
		}
		cout << "[" << i + 1 << "]��° set : "<<set<<endl;
		sum += set;
	}
	cout << "��� ��Ʈ�� �� : " << sum<<endl;
	return 0;
}