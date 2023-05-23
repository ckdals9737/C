#include <stdio.h>

int main() {
	int money, button, rest;
	printf("금액을 투입해 주세요\n");
	scanf("%d", &money);
	printf("1.콜라 (1300원) 2.생수 (800원) 3.사이다 (1200원)\n4.카페라떼(1600원) 5.아이스티 (1300원) 6.반환\n");
	printf("원하시는 음료수를 선택해주세요\n");
	scanf("%d", &button);
	switch (button) {
	case 1:
		if (money < 1300) {
			printf("금액이 부족합니다.\n반환 금액:%d원", money);
		}
		else {
			rest = money - 1300;
			printf("콜라\n잔액:%d원", rest);
		}
		break;
	case 2:
		if (money < 800) {
			printf("금액이 부족합니다.\n반환 금액:%d원", money);
		}
		else {
			rest = money - 800;
			printf("생수\n잔액:%d원", rest);
		}
		break;
	case 3:
		if (money < 1200) {
			printf("금액이 부족합니다.\n반환 금액:%d원", money);
		}
		else {
			rest = money - 1200;
			printf("사이다\n잔액:%d원", rest);
		}
		break;
	case 4:
		if (money < 1600) {
			printf("금액이 부족합니다.\n반환 금액:%d원", money);
		}
		else {
			rest = money - 1600;
			printf("카페라떼\n잔액:%d원", rest);
			break;
	case 5:
		if (money < 1300) {
			printf("금액이 부족합니다.\n반환 금액:%d원", money);
		}
		else {
			rest = money - 1300;
			printf("아이스티\n잔액:%d원", rest);
		}
		break;
	case 6:
		printf("반환되었습니다.\n반환 금액:%d", money);
		break;
	default:
		printf("잘못 입력 하셨습니다.\n반환 금액:%d", money);
		}
	}
}