#include <stdio.h>

int main() {
	char c[3];
	scanf("%s", &c);
	double s;
	switch (c[0]) {
	case 'A':
		s = 4; break;
	case 'B':
		s = 3; break;
	case 'C':
		s = 2; break;
	case 'D':
		s = 1; break;
	}
	switch (c[1]) {
	case '+':
		s += 0.3; break;
	case'-':
		s -= 0.3; break;
	}
	printf("%.1f", s);
	return 0;
}