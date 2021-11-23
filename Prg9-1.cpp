#include<iostream>
using namespace std;
void pointer(int* score){
	(*score)++;
}
void reference(int & score1){
	score1++;
}

int main() {
	int score=90;
	int& rScore1=score;
	cout << score << endl;
	rScore1++;
	cout << score << endl;
	int& rScore2 = rScore1;
	rScore2++;
	cout << score<<endl;
	pointer(&score);
	cout << score << endl;
	reference(score);
	cout << score << endl;
	return 0;
}