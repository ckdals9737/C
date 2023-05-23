#include <stdio.h>
//stdio.h 라이브러리를 코드에 포함한다.
//printf(), scanf()는 <stdio.h>에 들어있는 명령문

int main() {
	//서식지정자:%d(int), %lld(long long int),
	//			 %f(float), %lf(double), %c(char)
	//>printf(), scanf()에서 사용

	//scanf("서식지정자1 서식지정자2 ...", &변수1, &변수2, ...);
	//		>scanf()에서 ""부분에선 서식지정자와 공백만 사용
	//&:주소연산자>"포인터"
	int n = 1;
	printf("%d\n", n);
	printf("%d\n", &n);

	//연산자
	//산술연산자(5):+,-,*,/,%
	//대입연사자(1):=(대입한다)
	//복합대입연산자:+=,-=,*=,/=,%=

	//강제 형변환:특정 정보의 자료형을 임시로 강제 변환
	int a = 3;
	double result = 10 / (double)a;
	printf("%.3f\n", result);
	result = 10 / a;
	printf("%.3f\n", result);

}