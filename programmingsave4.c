#include <stdio.h> 
#include <stdbool.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#define N 5
#pragma warning(disable:4996)
int sum(int, ...);
float mean(float, ...);
int maximum(int);
int a=1;
int main() {
	//연결?
	extern int a;
	a += 1;//a=1+1;
	printf("%d\n", a);
	//난수 발생기?
	//가변 매개변수?? 매개변수를 개수에 상관없이 입력할 수 있다.
	printf("%d\n", sum(1, 2, 3, 4, 5));
	int a[N] = {1,2,33,213,23};
	printf("%d\n", maximum(a,5));
	//printf("%f\n", mean(121,23,523,12,45));
	return 0; 
}
int sum(int num,...) {
	float answer = 0;
	va_list argptr;
	__crt_va_start(argptr, num);
	for (; num > 0;num--)
		answer += __crt_va_arg(argptr,int);//?
	__crt_va_end(argptr);
	return(answer);
}
float mean(float num, ...) {
	float answer = 0;
	va_list argptr;
	__crt_va_start(argptr, num);
	float temp = (float)num;
	for (; num > 0; num--)
		answer += __crt_va_arg(argptr, float)/temp;//?
	__crt_va_end(argptr);
	return(answer);
}
int maximum(int num[],int len) {
	auto int answer=0;
	int criterion = len;
	for (int i=0; i<criterion; i++) {
		if (num[i] > answer) {
			answer = num[i];//?
		}
	}
	return answer;
}
