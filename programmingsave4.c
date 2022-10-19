#include <stdio.h> 
#include <stdbool.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
int sum(int, ...);
int maximum(int num[], int);
float mean(int num[], int);
int Ga = 1; //전역함수 선언
int* sort(int num[], int);
int main() {
	/*
	//연결?
	extern int Ga;
	Ga += 1;//a=1+1;
	printf("%d\n", Ga);
	//난수 발생기?
	//가변 매개변수?? 매개변수를 개수에 상관없이 입력할 수 있다.
	printf("%d\n", sum(1, 2, 3, 4, 5));
	int b[20] = {1,23,545,323,52};

	printf("%d\n", maximum(b, 5));
	printf("%f\n", mean(b,5));
	*/
	//정렬 구현
	int c[12] = { 12,43,12,454,123,5,34,312,123,32 };
	int* p = sort(c, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d, ", p[i]);
	}
	printf("\n");
	/*
	//2차원 배열
	int D2[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			D2[i][j] = (float)rand();
			if (D2[i][j] % i * j && i - 1 >= 0 && j - 2 >= 0) {
				D2[i][j] = (i * D2[i][j] + D2[i - 1][j - 2]) % j;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d, ", D2[i][j]);
		}
	}*/
	/*
//포인터 출력
int i = 10;
char c = 69;
float f = 12.3;
int* p = &i;
printf("i의 주소: %u\n", *p); //주소에 저장된 변수를 출력
printf("i의 주소: %u\n", *&i);
printf("i의 주소: %u\n", &i); //p와 &i의 주소값 출력은 같음.
printf("i의 주소: %u\n", p);
printf("c의 주소: %u\n", &c);
printf("f의 주소: %u\n", &f);*/

//메모리 공간 크기 구하기
	printf("int의 메모리 크기: %d\n", sizeof(int));
	printf("short의 메모리 크기: %d\n", sizeof(short));
	printf("long의 메모리 크기: %d\n", sizeof(long));
	printf("float의 메모리 크기: %d\n", sizeof(float));
	printf("double의 메모리 크기: %d\n", sizeof(double));
	printf("char의 메모리 크기: %d\n", sizeof(char));

	//505쪽 연습문제 풀어보기
	int i=10;
	int *p2 = &i;
	int arr2[]={10,20,30,40,50};
	printf("%d\n",(arr2)); //arr2 0번의 주소값출력 
	printf("%d\n",--(*p2)); //포인터에 증감연산할때 괄호하기.. 

	printf("%d\n",++(*p2)); 
	//9번 알아내기 함수 void로 포인터 값 변경한느거 알아내기

	return 0;
}
/*
int sum(int num, ...) {
	float answer = 0;
	va_list argptr;
	__crt_va_start(argptr, num);
	for (; num > 0; num--)
		answer += __crt_va_arg(argptr, int);//?
	__crt_va_end(argptr);
	return(answer);
}
int maximum(int num[], int len) {
	auto int answer = 0;
	int criterion = len;
	for (int i = 0; i < criterion; i++) {
		if (num[i] > answer) {
			answer = num[i];//?
		}
	}
	return answer;
}
float mean(int num[], int len) {
	float answer = 0;
	for (int i = 0; i < len; i++) {

		answer += (float)num[i] / (float)len;
	}
	return answer;
}
*/
int* sort(int num[], int len) {
	int temp;
	for (int j = 0; j < len; j++) {
		for (int i = 0; i < len; i++) {
			if ((num[i] > num[j] && i < j) || (num[i] < num[j] && i > j)) {
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
	}

	return num;
}
