#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char name;
	int kor, math, eng;
	scanf("%c %d %d %d", &name, &kor, &math, &eng);
	//scanf()의 ""안에는, 서식지정자와 공백만 쓸 수 있다.
	double result = (double)(kor + math + eng) / 3;
	//강제 형변환:특정 정보의 자료형을 강제로 변환
	printf("갑습니다.%c님\n이번 시험의 평균은 %.2f입니다.", name, result);
	
}