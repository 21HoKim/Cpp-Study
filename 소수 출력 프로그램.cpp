#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int n;
	cout << "2이상의 정수를 입력하세요 : ";
	cin >> n; //n에 정수를 입력
	int count = 0; //출력횟수를 카운트할 변수
	for (int i = 2; i <= n; i++) { //2부터 입력받은 수 n까지
		bool Pnum = true; //소수라고 가정
		for (int j = 2; j < i; j++) {
			if (i % j == 0) { // 만약 1과 자신 이외의 수로 나누어떨어지면
				Pnum = false; //소수가 아님
			}
		}
		if (Pnum) { //소수이면 출력, 출력횟수 카운트
			cout <<setw(3) <<i<<" ";
			count++;
		}
		if (count % 5 == 0 && count!=0) { //출력횟수가 5로 나누어떨어지면 줄내림, 0으로 초기화
			cout << endl;
			count = 0;
		}
	}
	return 0;
}