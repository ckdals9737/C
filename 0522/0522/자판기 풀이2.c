#include <stdio.h>

int main() {
	//1.����ڰ� ���� �� �Է¹ޱ�
	int money;
	int plus;
	int button;
	int rest = 0;
	printf("���� �־��ּ���\n");
	scanf("%d", &money);
	while (money < 800) {
		printf("���� ���ڸ��ϴ�. �� �־��ּ���\n���� �ݾ�:%d��\n",money);
		scanf("%d", &plus);
		money += plus;
	}
	while (money > 800) {
		printf("���� �ݾ� : % d��\n", money);
		if (money >= 1300) {
			printf("1�� �����)�ݶ� (1300��)\n");
		}
		if (money >= 800) {
			printf("2�� �����)���� (800��)\n");
		}
		if (money >= 1200) {
			printf("3�� �����)���̴� (1200��)\n");
		}
		if (money >= 1600) {
			printf("4�� �����)ī��� (1600��)\n");
		}
		if (money >= 1300) {
			printf("5�� �����)���̽�Ƽ (1300��)\n");
		}
		if (money >= 0) {
			printf("6�� ��ȯ\n");
		}
		scanf("%d", &button);

		while (button >= 6) {
			money += button;
			printf("���� �ݾ�:%d��\n", money);
			if (money >= 1300) {
				printf("1�� �����)�ݶ� (1300��)\n");
			}
			if (money >= 800) {
				printf("2�� �����)���� (800��)\n");
			}
			if (money >= 1200) {
				printf("3�� �����)���̴� (1200��)\n");
			}
			if (money >= 1600) {
				printf("4�� �����)ī��� (1600��)\n");
			}
			if (money >= 1300) {
				printf("5�� �����)���̽�Ƽ (1300��)\n");
			}
			if (money >= 0) {
				printf("6�� ��ȯ\n");
			}
			scanf("%d", &button);
		}

		switch (button) {
		case 1:
			rest = money - 1300;
			printf("�ݶ� �����ϼ̽��ϴ�.\n");
			break;
		case 2:
			rest = money - 800;
			printf("������ �����ϼ̽��ϴ�.\n");
			break;
		case 3:
			rest = money - 1200;
			printf("���̴ٸ� �����ϼ̽��ϴ�.\n");
			break;
		case 4:
			rest = money - 1600;
			printf("ī��󶼸� �����ϼ̽��ϴ�.\n");
			break;
		case 5:
			rest = money - 1300;
			printf("���̽�Ƽ�� �����ϼ̽��ϴ�.\n");
			break;
		default:
			rest = money;
			printf("��ȯ�Ǿ����ϴ�.\n");
			printf("��ȯ���� %d���Դϴ�.\n", rest);
			return 0;
		}
		money = rest;
	}
	printf("�Ž������� %d���Դϴ�.\n", rest);
}