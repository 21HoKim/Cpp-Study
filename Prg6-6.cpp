#include<iostream>
#include<ctime>
using namespace std;
int main() {
	long long es = time(0);
	int cs = es % 60;
	long em = es / 60;
	int cm = em % 60;
	long eh = em / 60;
	int ch = eh % 24;
	cout << "현재 시간 = ";
	cout << ch << ":" << cm << ":" << cs << endl;


	return 0;
}