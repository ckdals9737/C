#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int kor, math, eng;//int���� ����
	char name;//char���� ����
	double ori;//double���� ����
	printf("�̸��� �Է��ϼ���.");
	scanf("%c", &name);//char���� �Է� ����
	printf("���������� �Է��ϼ���.");
	scanf("%d", &kor);//int���� �߿� kor���� �Է� ����
	printf("���������� �Է��ϼ���.");
	scanf("%d", &math);//int���� �߿� math���� �Է� ����
	printf("���������� �Է��ϼ���.");
	scanf("%d", &eng);//int���� �߿� eng���� �Է� ����
	ori = (double)(kor + math + eng) / 3;//double������ ori �� ������ ���� ���(������ �Ǽ��� �ϸ� ������� �Ǽ��� ����)
	printf("�ݰ����ϴ�.%c��\n�̹� ������ ����� %.2f�Դϴ�.", name, ori);
}