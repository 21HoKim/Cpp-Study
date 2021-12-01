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
	cout << "생성할 사람의 수는? ";
	cin >> n;
	Person* p = new Person[n]; //Person[0],Person[1],Person[2]
	string name;
	string number;
	int birth;
	cout << n << "명 각각의 이름과 전화 번호 그리고 생년월일을 입력해 주세요." << endl;
	for (int i = 0; i < n; i++) {
		cout << "사람 " << i + 1 << ": ";
		cin >> name >> number >> birth; //20020801 ,20021231 - 31= 1200
		//cout << endl;
		//cout << p[i].getName();
		p[i].set(name, number, (birth % 100), (birth % 10000) / 100, birth / 10000); //이름,전번,일,월,년도
	}
	cout << endl << endl;
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < n; i++) {
		cout << p[i].getName() << " ";
	}
	cout << "입니다." << endl;
	cout << "전화번호를 검색합니다. 이름을 입력하세요." << endl;
	cout << "검색 대상자 이름 : ";
	cin >> name;
	cout << name << "의 전화 번호는 ";
	for (int i = 0; i < n; i++) {
		if (p[i].getName().compare(name) == 0) {
			cout << p[i].getTel() << " 입니다." << endl;
		}
	}
	cout << "검색할 사람의 출생년도를 입력하세요. ";
	cin >> birth;
	cout << birth << "년 출생자는";
	for (int i = 0; i < n; i++) {
		if (p[i].getbirth_year() == birth) {
			cout << " " << p[i].getName();
		}
	}
	cout << "입니다." << endl;
	cout << "전화 번호 끝자리를 알려줍니다. 이름을 입력하세요 : ";
	cin >> name;
	for (int i = 0; i < n; i++) {
		int len;
		if (p[i].getName().compare(name) == 0) {
			len = p[i].getTel().length();
			cout << name << "의 전화 번호 끝자리는 " << p[i].getTel().substr(len - 4) << "입니다" << endl;
		}
	}


	delete[] p;
	return 0;
}