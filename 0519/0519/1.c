#include <stdio.h>
//stdio.h ���̺귯���� �ڵ忡 �����Ѵ�.
//printf(), scanf()�� <stdio.h>�� ����ִ� ��ɹ�

int main() {
	//����������:%d(int), %lld(long long int),
	//			 %f(float), %lf(double), %c(char)
	//>printf(), scanf()���� ���

	//scanf("����������1 ����������2 ...", &����1, &����2, ...);
	//		>scanf()���� ""�κп��� ���������ڿ� ���鸸 ���
	//&:�ּҿ�����>"������"
	int n = 1;
	printf("%d\n", n);
	printf("%d\n", &n);

	//������
	//���������(5):+,-,*,/,%
	//���Կ�����(1):=(�����Ѵ�)
	//���մ��Կ�����:+=,-=,*=,/=,%=

	//���� ����ȯ:Ư�� ������ �ڷ����� �ӽ÷� ���� ��ȯ
	int a = 3;
	double result = 10 / (double)a;
	printf("%.3f\n", result);
	result = 10 / a;
	printf("%.3f\n", result);

}