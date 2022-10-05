#include <stdio.h> 
#include <stdbool.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

char* CAP(char[]);
char _CAP(char);
int _bin(int);
void replace(int*, int*);
void _replace(int, int);
int main() {
	unsigned int speed; //?
	speed = -10;
	printf("%d", speed < 0);//분명 -10인데 0보다 크다는 판정이 뜸. 

	const int int1 = 10;

	//int1 = 20 -> error;
	//printf("%d", (int1));
	/*
	int i;
	float f,f0,f1,f2;
	double d;
	i=34567890;
	f=34567890;
	d=34567890;

	printf("i = %d, f = %f, d = %f\n",i,f,d);
	f0 = 34567889;
	f1 = 34567891;
	f2 = 34567892;
	printf("f0 = %f, f1 = %f, f2 = %f",f0,f1,f2);
	*/

	/*
	//1.47이란 숫자를 주고 반올림하기
	double ROUND,num=1.6;
	ROUND=round(num);
	//printf("%f",ROUND);*/


	/*
	//임의의 소문자를 주면 대문자를 주는 시스템만들기
	char s1='r';
	char string[10]="hello";
	printf("%c\n", _CAP(s1)); r->R
	printf("%s\n",CAP(string));//hello->HELLO*/

	//binary값 출력하기 이거 어케하는 건지 모르겠음**


	//연산 규칙?
	int a = 10, b = 11;
	replace(&a, &b);
	printf("a=%d, b=%d", a, b);

	return 0;
}

char _CAP(char c) {
	int V = (int)'Z' - (int)'z';
	int _c = (int)c;
	int _a = (int)'a';
	int _z = (int)'z';
	if (_c >= _a && _c <= _z) {
		int CAPITAL = (int)c + V;
		return (char)CAPITAL;
	}
	else {
		return c;
	}
}

char* CAP(char c[]) {
	for (int i = 0; c[i] != '\0'; i++) {
		c[i] = _CAP(c[i]);
	}
	return c;
}

int _bin(int n) {
	if (n % 2 != 0) {
		int re = n % 2;
		return (int)(n - re) / 2;
	}
	else {
		return n / 2;
	}
}
void replace(int *n1, int *n2) {
	int *temp = *n1;
	*n1 = *n2;
	*n2 = *temp;
}

void _replace(int n1, int n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
}
