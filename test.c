#include<stdio.h>
#include<string.h>
int main() {
	char a[100][51]; //세로 100 가로 51
	int size_arr;
	int count = 0;
	char temp[51]; //교환할때 사용
	char a_[51]; //자를때 사용
	scanf("%d ", &size_arr);
	/*for (int i = 0; ; i++) {
		scanf("%s", a[i]);
		if (a[i][0] < 51) {
			break;
		}
		count++;
	}*/
	gets(a_); //공백 구분없이 다 입력 받음
	int N = strlen(a_);
	//printf("%s\n", a_);
	int n;
	scanf("%d", &n);
	char* ptr = strtok(a_, " ");
	while (ptr != NULL)              //ptr이 NULL일때까지 (= strtok 함수가 NULL을 반환할때까지)
	{
		//printf("%s\n", ptr); //자른 문자 출력
		strcat(a, ptr);
		ptr = strtok(NULL, " ");     //자른 문자 다음부터 구분자 또 찾기
	}
	/*
	for (int i = 0; i < N; i++) {
		if (a_[i]=='\0') {
			for (int j = 0+count*n; j < i; j++) {
				a[count][j] = a_[j];
				a[count][i] = '\0';
			}
			count++;
		}
	}
	for (int i = 0; i <= count; i++) {
		printf("!=%s ", a[i]);
	}*/
	//printf("count = %d\n", count);
	int n_=0;//n이 같을때 사용할 변수
	for (int i = 0; i < count-1; i++) {
		for (int j = 0; j < count; j++) {
			if (a[i][n] > a[i + 1][n]) {
				for (int k = 0; k < size_arr; k++) {
					temp[k] = a[i][k];
					a[i][k] = a[i + 1][k];
					a[i + 1][k] = temp[k];
				}
			}
			if (a[i][n] == a[i + 1][n]) {
				n++;
				j--;
			}
		}
	}
	for (int i = 0; i < count; i++) {
		printf("%s ", a[i]);
		}
	return 0;
}