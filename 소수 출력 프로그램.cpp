#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int n;
	cout << "2�̻��� ������ �Է��ϼ��� : ";
	cin >> n; //n�� ������ �Է�
	int count = 0; //���Ƚ���� ī��Ʈ�� ����
	for (int i = 2; i <= n; i++) { //2���� �Է¹��� �� n����
		bool Pnum = true; //�Ҽ���� ����
		for (int j = 2; j < i; j++) {
			if (i % j == 0) { // ���� 1�� �ڽ� �̿��� ���� �����������
				Pnum = false; //�Ҽ��� �ƴ�
			}
		}
		if (Pnum) { //�Ҽ��̸� ���, ���Ƚ�� ī��Ʈ
			cout <<setw(3) <<i<<" ";
			count++;
		}
		if (count % 5 == 0 && count!=0) { //���Ƚ���� 5�� ����������� �ٳ���, 0���� �ʱ�ȭ
			cout << endl;
			count = 0;
		}
	}
	return 0;
}