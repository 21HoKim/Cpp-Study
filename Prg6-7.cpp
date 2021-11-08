#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	srand(time(0));
	//cout << 0 << "~" << RAND_MAX << endl;
	for (int i = 0; i < 10; i++) {
		cout << (rand() % 30)+15 << endl; //15~44
	}
	return 0;
}