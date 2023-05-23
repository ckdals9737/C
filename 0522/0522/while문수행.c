#include <stdio.h>
//1.1부터 num(입력값)까지 출력하는 코드

int main() {
	int n = 1,num;
	scanf("%d",&num);
	while (n <=num) {
		printf("%d ", n);
		n++;
	}
}