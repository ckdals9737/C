#include <stdio.h>

int main() {
	//백준 10950번 문제
	//주어진 횟수만큼, 한쌍의 입력값을 받고,즉시 덧세결과 출력
	//1.수행할 횟수 입력 받기
	int T;
	scanf("%d", &T);
	//2.T만큼 덧셈에 대한 입출력 수행
	while (T > 0) {
		//뎃셈 수행할 2개의 값 입력
		int a, b, c;
		scanf("%d %d", &a, &b);
		//덧셈 결과 출력
		c = a + b;
		printf("%d\n", c);
		//덧셈 한번 수행할 때마다, 수행할 횟수 차감
		//이 구문이 있어야, 주어진 횟수만큼 덧셈 수행하고
		//반복문 탈출할 수 있음
		T--;
	}
}