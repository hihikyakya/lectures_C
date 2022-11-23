//집가서 오류 고치고 
#include <stdio.h>
int main() {
	//포인터 배열의 활용

	//다차원 배열과 포인터
	int* p[10];
	int m=20, n=10;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int *arr = p[i];
			arr[j] = 10;

		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int* arr = *(p + i);
			printf("%d ", *(arr + j));
		}
		printf("\n");
	}
	return 0;
}
