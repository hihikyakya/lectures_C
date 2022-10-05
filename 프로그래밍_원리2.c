#include <stdio.h> 
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
int main() {
	/*float result1;
	int result2;
	printf("2+3=%d\n", 2 + 3);
	printf("2-3=%d\n", 2 - 3);
	printf("2*3=%d\n", 2 * 3);
	printf("2/3=%d\n", 2 / 3);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", i);
	}
	result1 = multiply2(3.122, 4.326);
	result2 = multiply1(3, 4);
	printf("%g\n",result1);
	printf("%d\n", result2); */
	int num01, num02;



	printf("첫 번째 정수를 입력하세요 : ");

	scanf_s("%d", &num01);

	printf("두 번째 정수를 입력하세요 : ");

	scanf_s("%d", &num02);
	return 0; 
}
int multiply1(int a, int b) {
	return a * b;
}
float multiply2(float a, float b) {
	return a * b;
}
