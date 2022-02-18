#include <stdio.h>

int main(void) {
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	/* 배열의 경계를 명시적으로 지정해 해결 */

	for (int i = 0; i < 6; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
