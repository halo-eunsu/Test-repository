#include <stdio.h>

int main(void) {
	int arr[5] = { 1, 2, 3, 4, 5, 6 };
	/* 초기화에서의 크기는 4이지만, 배열의 크기는 5이기 때문에
	   컴파일러는 에러를 진단함. */
	
	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}