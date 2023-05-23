#include <stdio.h>

int main() {
	char a, b;
	double c;
	scanf("%c%c", &a, &b);
	if (a == 'A') {
		c = 4;
	}
	else if(a == 'B') {
		c = 3;
	}
	else if (a == 'C') {
		c = 2;
	}
	else if (a == 'D') {
		c = 1;
	}
	else if (a == 'F') {
		c = 0;
	}
	if (b == '+') {
		c = c + 0.3;
	}
	else if (b == '-') {
		c = c - 0.3;
	}
	else (c = c);
	printf("%.1f", c);
}