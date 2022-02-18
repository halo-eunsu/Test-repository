#include <stdio.h>

struct numbers {
	short num_a, num_b, num_c;
};

int sum_numbers(const struct numbers* numb) {
	int total = 0;
	const short* numb_ptr;

	for (numb_ptr = &numb->num_a;
		numb_ptr <= &numb->num_c;
		numb_ptr++) {
		total += *(numb_ptr);
	}

	printf("total : %d", total);
	return total;
}

int main(void) {
	struct numbers my_numbers = { 1, 2, 3 };
	sum_numbers(&my_numbers);
	
	printf("%p", sum_numbers);
	return 0;
}