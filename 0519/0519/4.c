#include <stdio.h>

int main() {
	//if��:���࿡
	//>Ư�� ���ǿ� ���� ������ ��ɹ��� �޸��� �� ���
	/*if (���ǹ�) { 
	�� ���ǹ� �����Ҷ� ������ ��ɹ� 
	}*/
	//����:������ ���� ���� ���
	//1. ���� �Է�
	int score;
	scanf("%d", &score);
	//2. ���� ���
	//2-1 A���� ��� (score�� ���� 90~100���� �϶�)
	/*if (score >= 90 && score <= 100){
		printf("A�����Դϴ�.");
	}
	if (score >= 80 && score < 90) {
		printf("B�����Դϴ�");
	}
	if (score >= 70 && score < 80) {
		printf("C�����Դϴ�");
	}
	if (score >= 60 && score < 70) {
		printf("D�����Դϴ�");
	}
	if (score < 60) {
		printf("F�����Դϴ�");
	}*/
	//if-else if-else
	//if-else-else if(x)
	if(score >= 90) {
		printf("A�����Դϴ�.");
	}
	else if (score >= 80) {
		/*�� ������ �������� �ʰ� �ش� ������ �����Ѵٸ�,
		�Ʒ��� �����϶�*/
		printf("B�����Դϴ�.");
	}
	else if (score >= 70) {
		printf("C�����Դϴ�.");
	}
	else if (score >= 60) {
		printf("D�����Դϴ�.");
	}
	else {//�� ������ ��� �������� �ʴ´ٸ� �̰Ŷ� �����϶�
		printf("F�����Դϴ�.");
	}
}