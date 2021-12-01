#include<iostream>
#include<string>
using namespace std;

class Person {
	string name;
	string tel;
	int birth_day;
	int birth_month;
	int birth_year;
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	int getbirth_day() { return birth_day; }
	int getbirth_month() { return birth_month; }
	int getbirth_year() { return birth_year; }
	void set(string name, string tel, int birth_day, int birth_month, int birth_year);
};
void Person::set(string N, string T, int b_d, int b_m, int b_y) {
	name = N;
	tel = T;
	birth_day = b_d;
	birth_month = b_m;
	birth_year = b_y;
}
Person::Person()
{
}
int main() {
	int n;
	cout << "������ ����� ����? ";
	cin >> n;
	Person* p = new Person[n]; //Person[0],Person[1],Person[2]
	string name;
	string number;
	int birth;
	cout << n << "�� ������ �̸��� ��ȭ ��ȣ �׸��� ��������� �Է��� �ּ���." << endl;
	for (int i = 0; i < n; i++) {
		cout << "��� " << i + 1 << ": ";
		cin >> name >> number >> birth; //20020801 ,20021231 - 31= 1200
		//cout << endl;
		//cout << p[i].getName();
		p[i].set(name, number, (birth % 100), (birth % 10000) / 100, birth / 10000); //�̸�,����,��,��,�⵵
	}
	cout << endl << endl;
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < n; i++) {
		cout << p[i].getName() << " ";
	}
	cout << "�Դϴ�." << endl;
	cout << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ���." << endl;
	cout << "�˻� ����� �̸� : ";
	cin >> name;
	cout << name << "�� ��ȭ ��ȣ�� ";
	for (int i = 0; i < n; i++) {
		if (p[i].getName().compare(name) == 0) {
			cout << p[i].getTel() << " �Դϴ�." << endl;
		}
	}
	cout << "�˻��� ����� ����⵵�� �Է��ϼ���. ";
	cin >> birth;
	cout << birth << "�� ����ڴ�";
	for (int i = 0; i < n; i++) {
		if (p[i].getbirth_year() == birth) {
			cout << " " << p[i].getName();
		}
	}
	cout << "�Դϴ�." << endl;
	cout << "��ȭ ��ȣ ���ڸ��� �˷��ݴϴ�. �̸��� �Է��ϼ��� : ";
	cin >> name;
	for (int i = 0; i < n; i++) {
		int len;
		if (p[i].getName().compare(name) == 0) {
			len = p[i].getTel().length();
			cout << name << "�� ��ȭ ��ȣ ���ڸ��� " << p[i].getTel().substr(len - 4) << "�Դϴ�" << endl;
		}
	}


	delete[] p;
	return 0;
}