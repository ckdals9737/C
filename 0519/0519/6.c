#include <stdio.h>

int main() {
	//2���� ���ڷ� �̷���� ������ �������� �����Ͽ� ����϶�
	//1. �� �Է¹ޱ�
	//c1 ���� ���󰩽�:A,B,C,D,F
	//c2 ���� ����:+,-,0,(�ƿ����ų�) 
	char c1, c2;
	scanf("%c", &c1);
	//c1�� ���� F��� ��� ��� ���, �ƴ϶�� �Է� �� ������ �̾ ����
	if (c1 == 'F') {
		printf("0.0\n");
	}
	else {
		char c2;
		scanf("%c", &c2);//���� ���п� �ѹ��� ����
		double score = 0;
		if (c1 == 'A') {
			score = 4;
		}
		else if (c1 == 'B') {
			score = 3;
		}
		else if (c1 == 'C') {
			score = 2;
		}
		else (score = 1);
		if (c2 == '+') {
			score += 0.3;
		}
		else if (c2 == '-') {
			score -= 0.3;
		}
		printf("%.1f", score);
	}
}