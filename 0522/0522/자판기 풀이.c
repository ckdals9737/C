#include <stdio.h>

int main() {
	//1.����ڰ� ���� ���� ��û�ϴ� ����� �Է¹ޱ�
	int money;
	printf("���� �������ּ���.");
	scanf("%d", &money);
	printf("1.�ݶ�(1300��) 2.����(800��) 3.���̴�(1200��)4.ī���(1600��) 5.���̽�Ƽ(1300��)");
	int button;
	scanf("%d", &button);

	//2����� ���ſ� ���� ����
	int rest=0; //�Ž����� ������ ����
	switch (button) {
	case 1:
		rest = money - 1300; //�ݶ� ������ ���� �Ž�����
		if (rest > 0) {
			printf("�ݶ� �����ϼ̽��ϴ�.\n");
		}
		break;
	case 2:
		rest = money - 800;
		if (rest > 0) {
			printf("������ �����ϼ̽��ϴ�.\n");
		}
		break;
	case 3:
		rest = money - 1200;
		if (rest > 0) {
			printf("���̴ٸ� �����ϼ̽��ϴ�.\n");
		}
		break;
	case 4:
		rest = money - 1600;
		if (rest > 0) {
			printf("ī��󶼸� �����ϼ̽��ϴ�.\n");
		}
		break;
	case 5:
		rest = money - 1300;
		if (rest > 0) {
			printf("���̽�Ƽ�� �����ϼ̽��ϴ�.\n");
		}
		break;
	}
	if (rest>=0){
		printf("�Ž������� %d���Դϴ�.\n", rest);
	}
	else {
		printf("���� ���ڸ��ϴ�. �ٽ� �������ּ���");
	}
}