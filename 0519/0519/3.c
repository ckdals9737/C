#include <stdio.h>
#include <stdbool.h>//bool타입 사용가능 하게해줌

int main() {
	//연산자 부연설명

	//산술연산자(5):+,-,*,/,%
	//대입연산자(1):=(대입한다)
	//비교연산자:<,>,<=,>=,==(같다),!=(다르다)
	// bool 타입:자료형 중 하나, true(1) 또는 false(0)만 저장하는 타입
	bool tf = 1 < 5;//1은5보다 작다>tf=true
	printf("%d\n", tf);
	tf = 1 > 5;//1은 5보다 크다>tf=false
	printf("%d\n", tf);
	tf = 1 == 5;//1은 5랑 같다>tf=false
	printf("%d\n", tf);
	tf = 1 != 5;//1은 5랑 다르다>tf=true
	printf("%d\n", tf);

	//논리연산자(2):&&(and 연산자,그리고),||(or연산자,또는)
	//>식을 연결하여 더 구체적인 판별을 할 수 있도록 함
	bool t = 60 <= 70 && 70 <= 100;//t=true
	printf("%d\n", t);
	//70은 60보다 크거나 같고 100보단 작거나 같다
	t = 60 == 70 || 70 == 100;//t=false
	//70은 60이랑 같거나 100이랑 같다
	printf("%d\n", t);
	//증감연산자(2):++,--(전위,후위)
	int a = 1;
	printf("%d\n", a--);
	printf("%d\n", --a);
}