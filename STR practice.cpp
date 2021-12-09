#include<iostream>
#include<string>
using namespace std;

int main() {
	string str1 = "AAABBBCCCCSSSDDDFASSQQQWW";
	string str2=""; //ABCSDFASQW
	int j;
	str2 = str1.at(0);
	//cout << str2 << endl;
	for (int i = 1; i < str1.size(); i++) { //str1에서 문자를 하나씩 가져온다
		for (j = 0; j < str2.size(); j++) { //가져온 문자를 str2와 하나씩 비교ㅣ한다
			if (str1.at(i) == str2.at(j)) { //같은 문자가 있으면 str1에서 다음문자를 가져온다
				break;
			}
		}
		if (j == str2.size()) { //같은 문자가 발견되지 않고str2의 끝까지 가면
			str2 = str2 + str1.at(i); //j가 str2의 길이와 같아진다
		}
	}
	cout << str1 << endl;
	cout << str2 << endl;


	return 0;
}