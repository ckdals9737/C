#include <stdio.h>
//2.소문자를 입력 받은 경우엔 a부터 입력값까지 출력
//	대문자를 입력 받은 경우엔 A부터 입력값까지 출력
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