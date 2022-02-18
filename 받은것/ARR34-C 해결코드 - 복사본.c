#include <stdio.h>

enum{a = 10, b = 10, c =20};

int main(void) {
	int arr1[c][b] = { {20,10} };
	int(*arr2)[a] = { 10 };

	arr2 = arr1;
	printf("%d", *(arr2));

	return 0;
}