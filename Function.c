#include <stdio.h>

int findMax(int a, int b, int c) {

	int max = a;

	if (b > a)
		max = b;

	if (c > a)
		max = c;

	return max;
}

void get_numbers(int* a, int* b, int* c) {

	printf("숫자 세 개 입력하라!\t");
	scanf_s("%d %d %d", a, b, c);
}

int main(void) {

	int x, y, z = 0;
	int maxNum = 0;

	get_numbers(&x, &y, &z);
	maxNum = findMax(x, y, z);

	printf("가장 큰 값은 %d\n", maxNum);

	return 0;
}
