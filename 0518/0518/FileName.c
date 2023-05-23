#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d\n", a + b, a - b, a * b, a / b, a % b);
	int result = a + b;
	printf("%d\n", result);
	result = a - b;
	printf("%d\n", result);
	result = a * b;
	printf("%d\n", result);
	result = a / b;
	printf("%d\n", result);
	result = a % b;
	printf("%d\n", result);
}