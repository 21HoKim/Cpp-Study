#include<stdio.h>
#include<string.h>
int main() {
	char a[100][51]; //���� 100 ���� 51
	int size_arr;
	int count = 0;
	char temp[51]; //��ȯ�Ҷ� ���
	char a_[51]; //�ڸ��� ���
	scanf("%d ", &size_arr);
	/*for (int i = 0; ; i++) {
		scanf("%s", a[i]);
		if (a[i][0] < 51) {
			break;
		}
		count++;
	}*/
	gets(a_); //���� ���о��� �� �Է� ����
	int N = strlen(a_);
	//printf("%s\n", a_);
	int n;
	scanf("%d", &n);
	char* ptr = strtok(a_, " ");
	while (ptr != NULL)              //ptr�� NULL�϶����� (= strtok �Լ��� NULL�� ��ȯ�Ҷ�����)
	{
		//printf("%s\n", ptr); //�ڸ� ���� ���
		strcat(a, ptr);
		ptr = strtok(NULL, " ");     //�ڸ� ���� �������� ������ �� ã��
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
	int n_=0;//n�� ������ ����� ����
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