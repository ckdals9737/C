#include <stdio.h>

int main() {
	int a,b,n=1;
	char c;
	printf("타입 선택\n1.숫자\n2.영어문자\n");
	scanf("%d", &a);
	rewind(stdin);//아직 안배움
	switch (a) {
	case 1:
		printf("몇 까지 출력하시겠습니까?");
		scanf("%d", &b);
		while (n <= b) {
			printf("%d ", n);
			n++;
		}
		break;
	case 2:
		printf("어디 까지 출력하시겠습니까?\n");
		scanf("%c", &c);
		if (c >= 'a' && c <= 'z') {
			n = 'a';
		}
		else if (c >= 'A' && c <= 'Z') {
			n = 'A';
		}
		while (n <= c) {
			printf("%c ", n);
			n++;
		}
	}
}