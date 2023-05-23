#include <stdio.h>

int main() {
	int a, b;
	scanf("%d", &a);
	b = 1;
	while (a>0) {
		b = b * a;
		a--;
	}
	printf("%d", b);
}