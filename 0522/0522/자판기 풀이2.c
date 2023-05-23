#include <stdio.h>

int main() {
	//1.사용자가 넣은 돈 입력받기
	int money;
	int plus;
	int button;
	int rest = 0;
	printf("돈을 넣어주세요\n");
	scanf("%d", &money);
	while (money < 800) {
		printf("돈이 모자릅니다. 더 넣어주세요\n투입 금액:%d원\n",money);
		scanf("%d", &plus);
		money += plus;
	}
	while (money > 800) {
		printf("투입 금액 : % d원\n", money);
		if (money >= 1300) {
			printf("1번 음료수)콜라 (1300원)\n");
		}
		if (money >= 800) {
			printf("2번 음료수)생수 (800원)\n");
		}
		if (money >= 1200) {
			printf("3번 음료수)사이다 (1200원)\n");
		}
		if (money >= 1600) {
			printf("4번 음료수)카페라떼 (1600원)\n");
		}
		if (money >= 1300) {
			printf("5번 음료수)아이스티 (1300원)\n");
		}
		if (money >= 0) {
			printf("6번 반환\n");
		}
		scanf("%d", &button);

		while (button >= 6) {
			money += button;
			printf("투입 금액:%d원\n", money);
			if (money >= 1300) {
				printf("1번 음료수)콜라 (1300원)\n");
			}
			if (money >= 800) {
				printf("2번 음료수)생수 (800원)\n");
			}
			if (money >= 1200) {
				printf("3번 음료수)사이다 (1200원)\n");
			}
			if (money >= 1600) {
				printf("4번 음료수)카페라떼 (1600원)\n");
			}
			if (money >= 1300) {
				printf("5번 음료수)아이스티 (1300원)\n");
			}
			if (money >= 0) {
				printf("6번 반환\n");
			}
			scanf("%d", &button);
		}

		switch (button) {
		case 1:
			rest = money - 1300;
			printf("콜라를 구매하셨습니다.\n");
			break;
		case 2:
			rest = money - 800;
			printf("생수를 구매하셨습니다.\n");
			break;
		case 3:
			rest = money - 1200;
			printf("사이다를 구매하셨습니다.\n");
			break;
		case 4:
			rest = money - 1600;
			printf("카페라떼를 구매하셨습니다.\n");
			break;
		case 5:
			rest = money - 1300;
			printf("아이스티를 구매하셨습니다.\n");
			break;
		default:
			rest = money;
			printf("반환되었습니다.\n");
			printf("반환금은 %d원입니다.\n", rest);
			return 0;
		}
		money = rest;
	}
	printf("거스름돈은 %d원입니다.\n", rest);
}