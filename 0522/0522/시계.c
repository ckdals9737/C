#include <stdio.h>

int main() {
	int h, m, s;
	printf("현재 시각을 입력해 주세요.(시,분,초 순서대로)\n");
	scanf("%d", &h);
	scanf("%d", &m);
	scanf("%d", &s);
	printf("기능 1번:현재 시각 출력\n");
	printf("기능 2번:낮일까요? 오후일까요? 출력\n");
	printf("수행할 기능 번호를 입력해주세요.(1or2)\n");
	int button;
	scanf("%d", &button);
	switch(button){
	case 1:
		printf("%d시 %d분 %d초\n", h, m, s); break;
	case 2:
		if (7 <= h && h < 18) {
			printf("낮");
		}
		else {
			printf("밤");
		}
	}
}