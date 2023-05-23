#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int kor, math, eng;//int변수 선언
	char name;//char변수 선언
	double ori;//double변수 선언
	printf("이름을 입력하세요.");
	scanf("%c", &name);//char변수 입력 받음
	printf("국어점수를 입력하세요.");
	scanf("%d", &kor);//int변수 중에 kor변수 입력 받음
	printf("수학점수를 입력하세요.");
	scanf("%d", &math);//int변수 중에 math변수 입력 받음
	printf("영어점수를 입력하세요.");
	scanf("%d", &eng);//int변수 중에 eng변수 입력 받음
	ori = (double)(kor + math + eng) / 3;//double변수인 ori 값 설정을 위한 계산(한쪽을 실수로 하면 결과값은 실수로 나옴)
	printf("반갑습니다.%c님\n이번 시험의 평균은 %.2f입니다.", name, ori);
}