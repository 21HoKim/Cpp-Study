#include<iostream>
#include<string>
using namespace std;

int main() {
	string str1 = "AAABBBCCCCSSSDDDFASSQQQWW";
	string str2=""; //ABCSDFASQW
	int j;
	str2 = str1.at(0);
	//cout << str2 << endl;
	for (int i = 1; i < str1.size(); i++) { //str1���� ���ڸ� �ϳ��� �����´�
		for (j = 0; j < str2.size(); j++) { //������ ���ڸ� str2�� �ϳ��� �񱳤��Ѵ�
			if (str1.at(i) == str2.at(j)) { //���� ���ڰ� ������ str1���� �������ڸ� �����´�
				break;
			}
		}
		if (j == str2.size()) { //���� ���ڰ� �߰ߵ��� �ʰ�str2�� ������ ����
			str2 = str2 + str1.at(i); //j�� str2�� ���̿� ��������
		}
	}
	cout << str1 << endl;
	cout << str2 << endl;


	return 0;
}