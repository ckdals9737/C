#include <stdio.h>

int main() {
	char a, b;
	double c = 4.0;
	scanf("%c%c", &a, &b);
	if (a == 'A') {
		if (b == '+') {
			printf("%0.1f", c + 0.3);
		}
		else if (b == '-') {
			printf("%0.1f", c - 0.3);
		}
		else (printf("%0.1f", c));
	}
	c = 3.0;
	if (a == 'B') {
		if (b == '+') {
			printf("%0.1f", c + 0.3);
		}
		else if (b == '-') {
			printf("%0.1f", c - 0.3);
		}
		else (printf("%0.1f", c));
	}
	c = 2.0;
	if (a == 'C') {
		if (b == '+') {
			printf("%0.1f", c + 0.3);
		}
		else if (b == '-') {
			printf("%0.1f", c - 0.3);
		}
		else (printf("%0.1f", c));
	}
	c = 1.0;
	if (a == 'D') {
		if (b == '+') {
			printf("%0.1f", c + 0.3);
		}
		else if (b == '-') {
			printf("%0.1f", c - 0.3);
		}
		else (printf("%0.1f", c));
	}
	c = 0;
	if (a == 'F') { 
		printf("%0.1f", c);
	}
}