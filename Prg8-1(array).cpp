#include<iostream>
#include<fstream>
using namespace std;
int main() {
	const int CAP = 5;
	int numbers[CAP];
	int size = 0;
	ifstream ifs("number.txt");
	// ifs.open("number.txt"); �Ѵ� ����
	ofstream ofs("show.txt");
	if (!ifs) {
		cout << "�����̾����ϴ�"<<endl;
		return -1;
	}
	while (ifs >> numbers[size]) {
		size++;
		if (size >= CAP) {
			break;
		}
		//cout <<"size : " <<size << endl;
	}
	for (int i = 0; i < size; i++) {
		cout << "number[" <<i<< "] = " << numbers[i] << endl;
		//ofs<< "number[" << i << "] = " << numbers[i] << endl;
	}
	return 0;
}