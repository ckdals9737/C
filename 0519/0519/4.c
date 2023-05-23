#include <stdio.h>

int main() {
	//if문:만약에
	//>특정 조건에 따라 실행할 명령문을 달리할 때 사용
	/*if (조건문) { 
	위 조건문 만족할때 실행할 명령문 
	}*/
	//예제:평점에 따른 학점 출력
	//1. 평점 입력
	int score;
	scanf("%d", &score);
	//2. 학점 출력
	//2-1 A학점 출력 (score의 값이 90~100사이 일때)
	/*if (score >= 90 && score <= 100){
		printf("A학점입니다.");
	}
	if (score >= 80 && score < 90) {
		printf("B학점입니다");
	}
	if (score >= 70 && score < 80) {
		printf("C학점입니다");
	}
	if (score >= 60 && score < 70) {
		printf("D학점입니다");
	}
	if (score < 60) {
		printf("F학점입니다");
	}*/
	//if-else if-else
	//if-else-else if(x)
	if(score >= 90) {
		printf("A학점입니다.");
	}
	else if (score >= 80) {
		/*위 조건을 만족하지 않고 해당 조건을 만족한다면,
		아래를 샐행하라*/
		printf("B학점입니다.");
	}
	else if (score >= 70) {
		printf("C학점입니다.");
	}
	else if (score >= 60) {
		printf("D학점입니다.");
	}
	else {//위 조건을 모두 만족하지 않는다면 이거라도 실행하라
		printf("F학점입니다.");
	}
}