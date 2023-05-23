#include <stdio.h>

int main() {
	//오전인 경우 (h의 값이 0~11인 경우)
	//오후인 경우 (h의 값이 12~23인 경우)

	//1.시,분,초 정보 입력받기;
	int h, m, s;
	printf("현재 시각을 입력해 주세요.(시,분,초 순서대로)\n");
	scanf("%d %d %d", &h, &m, &s);

	//2.수행할 기능번호 입력받기
	printf("기능 1번:현재 시각 출력\n");
	printf("기능 2번:낮일까요? 오후일까요? 출력\n");
	printf("수행할 기능 번호를 입력해주세요.(1or2)");
	int button;
	scanf("%d", &button);

	//3.button 값에 따른 기능 수행(switch문)
	switch (button) {
	case 1://사용자가 1번 기능 수행을 요청할때
		printf("현재 시각은 %d시 %d분 %d초 입니다.\n", h, m, s);
		break;
	case 2://사용자가 2번 기능 수행을 요철할 때
		if (h >= 0 && h < 12) {
			printf("현재는 오전 입니다.\n");
		}
		else if (h >= 12 && h < 24) {
			printf("현재는 오후 입니다.\n");
		}
		else {
			printf("잘못된 번호를 입력하렸습니다.\n");
		}
		break;
		default:
		printf("잘못된 번호를 입력하렸습니다.\n");
	}
}