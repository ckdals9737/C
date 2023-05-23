#include <stdio.h>

int main() {
	char alpha;
	scanf("%c", &alpha);
	if (alpha >= 'A' && alpha <= 'Z') {
		char c = 'A';
		while (c <= alpha) {
			printf("%c ", c);
			c++;
		}
	}
	else if (alpha >= 'a' && alpha <= 'z') {
		char c = 'a';
		while (c <= alpha) {
			printf("%c ", c);
			c++;
		}
	}
	else {
		printf("잘못입력하였습니다.");
	}
}