#include <stdio.h>

int main() {
	char c1;
	scanf("%c", &c1);
	if (c1 == 'F') {
		printf("0.0\n");
	}
	else {
		char c2;
		double score;
		scanf("%c", &c2);
		switch (c1) {
		case 'A':
			score = 4; break;
		case 'B':
			score = 3; break;
		case 'C':
			score = 2; break;
		default:
			score = 1;
		}
		switch (c2) {
		case '+':
			score += 0.3; break;
		case '-':
			score -= 0.3;
		}
		printf("%.1f", score);
	}
}