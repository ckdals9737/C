#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char name;
	int kor, math, eng;
	scanf("%c %d %d %d", &name, &kor, &math, &eng);
	//scanf()�� ""�ȿ���, ���������ڿ� ���鸸 �� �� �ִ�.
	double result = (double)(kor + math + eng) / 3;
	//���� ����ȯ:Ư�� ������ �ڷ����� ������ ��ȯ
	printf("�����ϴ�.%c��\n�̹� ������ ����� %.2f�Դϴ�.", name, result);
	
}