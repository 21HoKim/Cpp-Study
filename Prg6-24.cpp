#include<iostream>
using namespace std;
void fun() {
	static int a=45; //함수가 종료되도 메모리 공간에 데이터가 계속 남아있어서 다음에 호출할때 값이 저장되어있음, 초기화는 딱 한번만.
	a++;
	cout << a << endl;
}
int main() {
	fun();
	fun();
	fun();
	return 0;
}