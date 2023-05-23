#include <stdio.h>

int main() {
	int score;
	scanf("%d", &score);
	//if문으로 작성한 부분을, switch문으로 변경하여 작성
	/*switch (판별할 기준점이 되는 변수 v) {
	case 값1:
		[v와 값1이 서로 같을 때, 실행할 명령문]
		break
	case 값2:
		[v와 값2이 서로 같을 때, 실행할 명령문]
	}*/
	//if문으로 작성한 구문을, switch문으로 변경하여 작성
	/*90~100>9~10>A학점인 경우
	80~90 > 8 > B학점인 경우
	70~80 > 7 > C학점인 경우
	60~70 > 6 > D학점인 경우
	나머지 > F학점인 경우*/
	score /= 10;
	switch (score) {
	case 10:
	case 9:
		//score의 값이 10이거나 9일 때, 아래 명령문 실행
		printf("A학점입니다."); break;
	case 8:
		printf("B학점입니다."); break;
	case 7:
		printf("C학점입니다."); break;
	case 6:
		printf("D학점입니다."); break;
	default://나머지가 없는 경우엔 쓰지않음
		printf("F학점입니다.");
	}
	//break를 만나게 되면, 이쪽으로 빠져나옴
}