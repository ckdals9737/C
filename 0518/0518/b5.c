#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//연산자 종류
	//산술연산자(5):+,-,*(곱셉),/(몫 나누기),%(나머지 나누기)
	//대입연사자(1):=(대입한다)
	//복합대입연산자:+=,-=,*=,/=,%=
	int n1 = 3, n2 = 5;
	printf("0. n1은 %d, n2는 %d\n", n1, n2);
	n1 += n2;//n1=n1+n2
	printf("1. +=결과:n1은 %d, n2는 %d\n", n1, n2);
	n1 -= n2;
	printf("2. -=결과:n1은 %d, n2는 %d\n", n1, n2);
	n1 *= n2;
	printf("3. *=결과:n1은 %d, n2는 %d\n", n1, n2);
	n1 /= n2;
	printf("4. /=결과:n1은 %d, n2는 %d\n", n1, n2);
	n1 %= n2;
	printf("5. %%=결과:n1은 %d, n2는 %d\n", n1, n2);
	//%% 결과창에 %표기위함
}