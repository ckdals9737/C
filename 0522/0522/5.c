#include <stdio.h>

int main() {
	//�ݺ���:Ư�� ������ ������ ������ ���ɹ��� �ݺ��Ѵ�
	//����:"while��","for��",do-while��

	//1.while��
	/*while (���ǹ�) {
		//�� ���ǹ� �����Ҷ����� "�ݺ�"�� ���ɹ�
	}*/
	//while�� ���� ����:���� ��/���� �Ǻ�>
	//	��:{}���� ���ɹ� ����->���� �Ǻ�
	// ����:�ݺ��� Ż��
	//�������� �ݺ����� ����Ǵ� ������ ���Բ� �����ؾ��Ѵ�.

	//1���� 10���� ���
	//printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n"); ����
	int n = 1;
	while (n <= 10) {
		//���� �ȿ��� ,n�� 1�� �߰��ϸ鼭 ���
		printf("%d ",n);
		n++;
		//���ǹ��� �����ϴ� ������ �Ű�ᰡ�� �ڵ� �����ؾ���
	}
	//n�� 11�� �Ǵ� ����, �ݺ��� Ż��
}