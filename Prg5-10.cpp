#include<iostream>
#include<iomanip>
using namespace std;
int main() {

	int col = 1;
	for (int c = 7; c <= 300; c+=7) {
		cout << setw(4) << c;
		col ++ ;
		if (col == 10) {
			cout << endl;
			col = 1;
		}
	}


	return 0;
}