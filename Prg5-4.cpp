#include<iostream>
using namespace std;
int main() {
	double n, count;
	double sum=0,sum1=0,sum2=0;
	cout << "숫자를 입력하세요 : ";
	cin >> n;
	count = 0;
	while (count <= n) {
		sum += count;
		sum1 += count * count;
		sum2 += count * count * count; 
		count++;
	}
	cout << fixed << sum << endl;
	cout << sum1 << endl;
	cout << sum2 << endl;
	return 0;
}