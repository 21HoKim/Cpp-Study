#include<iostream>
#include<string>
using namespace std;
string reverse(string  a) {
	int size = a.size();
	char temp;
	for (int i = 0; i < size / 2; i++) {
		temp = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = temp;
	}
	return a;
}
bool isPalindrome(string str) {
	int size = str.size();
	for (int i = 0; i < size / 2; i++) {
		if (str[i] != str[size - 1 - i]) {
			return false;
		}
	}
	return true;
}
int main() {
	string str1="Hello";
	string str2="Good Morning";
	string str3;
	str3 = str1 + str2;
	cout << str3<<endl;
	int a = str1.size();
	int b = str1.length();
	//cout << a << "\t" << b << endl;
	cout << str1[4] << endl;
	cout << str1.at(4) << endl;
	str1[4] = 'X';
	cout << str1 << endl;
	for (int i = 0; i < str2.size(); i++) {
		str2[i] = toupper(str2[i]);
	}
	cout << str2 << endl;
	cout << reverse(str2)<<endl;
	cout << str2 << endl;

	cout << str2.substr(6)<<endl; //부분문자열
	
	if (str1 < str2) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	cout << boolalpha << (str2 < str1) << endl;
	cout << str2.compare("H") << endl; //같으면 0 앞(비교당하는 문자열)이 더크면 1 뒤(비교하는 문자열)가 더크면 -1

	cout <<boolalpha <<isPalindrome(str1) << endl;
	cout << boolalpha << isPalindrome("noon") << endl;
	return 0;
}