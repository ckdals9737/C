#include <stdio.h>

int main() {
	//1.사용자가 넣은 돈과 요청하는 음료수 입력받기
	int money;
	printf("돈을 투입해주세요.");
	scanf("%d", &money);
	printf("1.콜라(1300원) 2.생수(800원) 3.사이다(1200원)4.카페라떼(1600원) 5.아이스티(1300원)");
	int button;
	scanf("%d", &button);

	//2음료수 구매에 대한 연산
	int rest=0; //거스름돈 저장할 변수
	switch (button) {
	case 1:
		rest = money - 1300; //콜라 구입한 뒤의 거스름돈
		if (rest > 0) {
			printf("콜라를 구매하셨습니다.\n");
		}
		break;
	case 2:
		rest = money - 800;
		if (rest > 0) {
			printf("생수를 구매하셨습니다.\n");
		}
		break;
	case 3:
		rest = money - 1200;
		if (rest > 0) {
			printf("사이다를 구매하셨습니다.\n");
		}
		break;
	case 4:
		rest = money - 1600;
		if (rest > 0) {
			printf("카페라떼를 구매하셨습니다.\n");
		}
		break;
	case 5:
		rest = money - 1300;
		if (rest > 0) {
			printf("아이스티를 구매하셨습니다.\n");
		}
		break;
	}
	if (rest>=0){
		printf("거스름돈은 %d원입니다.\n", rest);
	}
	else {
		printf("돈이 모자릅니다. 다시 실행해주세요");
	}
}