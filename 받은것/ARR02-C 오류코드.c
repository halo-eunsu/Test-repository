#include <stdio.h>

int main(void) {
	int arr[5] = { 1, 2, 3, 4, 5, 6 };
	/* �ʱ�ȭ������ ũ��� 4������, �迭�� ũ��� 5�̱� ������
	   �����Ϸ��� ������ ������. */
	
	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}