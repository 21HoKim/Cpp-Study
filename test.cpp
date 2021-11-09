#include<iostream>

using namespace std;

class test_class {
private:
	char *arr_student;
	int score;

public:
	void get_student(char arr[],int num);
	void student();
	int score_dord();
};

void test_class::get_student(char arr[], int num) {
	arr_student=arr;
	score = num;
}
void test_class::student() {
	arr_student[0]++;
}
int test_class::score_dord() {
	return score;
}
int main() {
	test_class c1;
	char stu[20] = "kimho";
	c1.get_student(stu, 97);
	c1.student();
	cout << "name : " << stu << endl;
	cout << "score : " << c1.score_dord() << endl;

	return 0;
}