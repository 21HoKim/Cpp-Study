#include<iostream>
#include<fstream>

using namespace std;

int main() {
	int num;
	int sum = 0;
	ifstream infile;
	ofstream outfile;
	infile.open("number.txt");
	outfile.open("show.txt");
	while (infile >> num) {
		outfile << num << endl;
		sum = sum + num;
	}
	cout << sum << endl;
	infile.close();
}