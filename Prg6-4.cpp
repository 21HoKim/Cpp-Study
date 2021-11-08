#include<iostream>
#include<cmath>
using namespace std;
int main() {
	const double PI = 3.141592;
	int n;
	double s, peri, area;
	do {
		cout << "변의 개수(4이상 정수) : ";
		cin >> n;
	} while (n < 4);
	do {
		cout << "변의길이 : ";
		cin >> s;
	} while (s <= 0.0);
	peri = n * s; //둘레
	area = (n * pow(s, 2)) / (n * tan(PI / n));
	cout << "둘레 : " << peri << endl << "넓이 : " << area << endl;
	return 0;
}