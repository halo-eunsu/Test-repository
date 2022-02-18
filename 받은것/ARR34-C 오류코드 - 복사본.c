#include <stdio.h>

int main(void) {
	enum {a = 10, b = 15, c = 20};

	int arr1[c][b];
	int(*arr2)[a];

	arr2 = arr1;

	printf("%p", arr2);
}