#include <stdio.h>

int main() {
	int a,b,n=1;
	char c;
	printf("Ÿ�� ����\n1.����\n2.�����\n");
	scanf("%d", &a);
	rewind(stdin);//���� �ȹ��
	switch (a) {
	case 1:
		printf("�� ���� ����Ͻðڽ��ϱ�?");
		scanf("%d", &b);
		while (n <= b) {
			printf("%d ", n);
			n++;
		}
		break;
	case 2:
		printf("��� ���� ����Ͻðڽ��ϱ�?\n");
		scanf("%c", &c);
		if (c >= 'a' && c <= 'z') {
			n = 'a';
		}
		else if (c >= 'A' && c <= 'Z') {
			n = 'A';
		}
		while (n <= c) {
			printf("%c ", n);
			n++;
		}
	}
}