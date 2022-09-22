#include <stdio.h> 
#include <stdbool.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
void V2(int num);
double fouranglehornV(double a, double b, double h);
float V(float r, float h);
int is_prime(int);
int get_integer(void);
float Vwithmathh(float,float);
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
	/*float num01, num02, v;
	printf("반지름: ");
	scanf_s("%f", &num01);
	printf("높이: ");
	scanf_s("%f", &num02);
	v = num01 * num01;
	v = v * num02 * 3.14;
	v = v / 3;
	printf("원뿔의 부피: %g", v);*/
	/*int num;
	printf("점수를 입력하세요:");
	scanf_s("%d", &num);
	if (num <= 100) {
		V2(num);
	}
	else {
		printf("점수를 다시 입력하세요.");
	}*/

	//함수란?
	/*사용자 함수를 만드는 방법?
	*
	*/
	/*
	printf("%6f",fouranglehornV(10,10,10));
	printf("%lf", V(3, 1));*/

	/*
	//소수의 합 구하기
	int num, result;

	num = get_integer();
	int sum = 0;
	float phi = num;
	for (int i = 1; i < num + 1; i++) {
		result = is_prime(i);
		if (result == 1) {
			sum += i;
			float x = i;
			if (num % i == 0) {
				phi = phi * (1 - 1 / x);
			}
		}
	}
	printf("오일러 수: %f", phi);
	printf("소수의 합:%d", sum);*/

	/*
	//math.h 라이브러리 사용해보기
	float pi = acos(-1);
	double f1 = 0.12456;
	printf("%g\n", ceil(f1)); // 올림함수
	printf("%g\n", floor(f1)); //내림함수
	printf("%d\n", abs((int)floor(-f1)));//x:int, maximum(x,0)+maximum(-x,0)
	printf("%g\n", fabs(-f1));*/

	//math library를 사용해 원뿔의 부피 구하기
	float r, h;
	r = 10;
	h = 3.1;
	printf("pi*%g*%g*%g/3=%f",r,r,h,Vwithmathh(r,h));
	
	return 0;
}
float Vwithmathh(float r,float h) {
	r = r * r;
	float pi = acos(-1);
	return pi * r * h / 3;
}


double fouranglehornV(double a, double b, double h) {
	return a * b * h / 3;
}
float V(float r, float h) {
	r = r * r;
	r = r * h;
	return r * 3.141592 / 3;
}
void V2(int num) {
	if (num >= 95) {
		printf("%d점은 A+에 해당합니다.", num);
	}
	else if (num < 95 && num >= 90) {
		printf("%d점은 A에 해당합니다.", num);
	}
	else if (num < 90 && num >= 85) {
		printf("%d점은 B+에 해당합니다.", num);
	}
	else if (num < 85 && num >= 80) {
		printf("%d점은 B에 해당합니다.", num);
	}
	else if (num < 80 && num >= 75) {
		printf("%d점은 C+에 해당합니다.", num);
	}
	else if (num < 75 && num >= 70) {
		printf("%d점은 C에 해당합니다.", num);
	}
	else if (num < 70 && num >= 65) {
		printf("%d점은 C에 해당합니다.", num);
	}
	else if (num < 65 && num >= 60) {
		printf("%d점은 C에 해당합니다.", num);
	}
	else if (num < 60) {
		printf("%d점은 F에 해당합니다.", num);
	}
}
int is_prime(int n) {
	int divisors = 0, i;
	for (i = 1; i <= n; i++) {
		if ((n % i == 0) || (i % n == 0)) {
			divisors++;
		}
	}
	return (divisors == 2 && n != 1);
}
int get_integer() {
	int n;
	printf("정수를 입력하시오:");
	scanf_s("%d", &n);
	return n;
}
