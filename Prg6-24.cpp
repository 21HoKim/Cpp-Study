#include<iostream>
using namespace std;
void fun() {
	static int a=45; //�Լ��� ����ǵ� �޸� ������ �����Ͱ� ��� �����־ ������ ȣ���Ҷ� ���� ����Ǿ�����, �ʱ�ȭ�� �� �ѹ���.
	a++;
	cout << a << endl;
}
int main() {
	fun();
	fun();
	fun();
	return 0;
}