#include <stdio.h>
int main() {
	char a, b;
	double c;
	scanf("%c%c", &a, &b);
	switch (a) {
	case 'A':
		c = 4; break;
	case 'B':
		c = 3; break;
	case 'C':
		c = 2; break;
	case 'D':
		c = 1; break;
	case 'F':
		c = 0;
	}
	switch (b) {
	case '+':
		c += 0.3; break;
	case '-':
		c -= 0.3;
	}
	printf("%.1f", c);
}