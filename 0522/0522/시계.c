#include <stdio.h>

int main() {
	int h, m, s;
	printf("���� �ð��� �Է��� �ּ���.(��,��,�� �������)\n");
	scanf("%d", &h);
	scanf("%d", &m);
	scanf("%d", &s);
	printf("��� 1��:���� �ð� ���\n");
	printf("��� 2��:���ϱ��? �����ϱ��? ���\n");
	printf("������ ��� ��ȣ�� �Է����ּ���.(1or2)\n");
	int button;
	scanf("%d", &button);
	switch(button){
	case 1:
		printf("%d�� %d�� %d��\n", h, m, s); break;
	case 2:
		if (7 <= h && h < 18) {
			printf("��");
		}
		else {
			printf("��");
		}
	}
}