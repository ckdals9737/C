#include <stdio.h>
//2.�ҹ��ڸ� �Է� ���� ��쿣 a���� �Է°����� ���
//	�빮�ڸ� �Է� ���� ��쿣 A���� �Է°����� ���
int main() {
	char num;
	scanf("%c", &num);
	int a;
	if (num >= 'A' && num <= 'Z') {
		a = 'A';
		while (a <= num) {
			printf("%c ", a);
			a++;
		}
	}
	else if (num >= 'a' && num <= 'z') {
		a = 'a';
		while (a <= num) {
			printf("%c ", a);
			a++;
		}
	}
}