#include <stdio.h>

int main() {
	int money, button, rest;
	printf("�ݾ��� ������ �ּ���\n");
	scanf("%d", &money);
	printf("1.�ݶ� (1300��) 2.���� (800��) 3.���̴� (1200��)\n4.ī���(1600��) 5.���̽�Ƽ (1300��) 6.��ȯ\n");
	printf("���Ͻô� ������� �������ּ���\n");
	scanf("%d", &button);
	switch (button) {
	case 1:
		if (money < 1300) {
			printf("�ݾ��� �����մϴ�.\n��ȯ �ݾ�:%d��", money);
		}
		else {
			rest = money - 1300;
			printf("�ݶ�\n�ܾ�:%d��", rest);
		}
		break;
	case 2:
		if (money < 800) {
			printf("�ݾ��� �����մϴ�.\n��ȯ �ݾ�:%d��", money);
		}
		else {
			rest = money - 800;
			printf("����\n�ܾ�:%d��", rest);
		}
		break;
	case 3:
		if (money < 1200) {
			printf("�ݾ��� �����մϴ�.\n��ȯ �ݾ�:%d��", money);
		}
		else {
			rest = money - 1200;
			printf("���̴�\n�ܾ�:%d��", rest);
		}
		break;
	case 4:
		if (money < 1600) {
			printf("�ݾ��� �����մϴ�.\n��ȯ �ݾ�:%d��", money);
		}
		else {
			rest = money - 1600;
			printf("ī���\n�ܾ�:%d��", rest);
			break;
	case 5:
		if (money < 1300) {
			printf("�ݾ��� �����մϴ�.\n��ȯ �ݾ�:%d��", money);
		}
		else {
			rest = money - 1300;
			printf("���̽�Ƽ\n�ܾ�:%d��", rest);
		}
		break;
	case 6:
		printf("��ȯ�Ǿ����ϴ�.\n��ȯ �ݾ�:%d", money);
		break;
	default:
		printf("�߸� �Է� �ϼ̽��ϴ�.\n��ȯ �ݾ�:%d", money);
		}
	}
}