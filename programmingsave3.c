#include <stdio.h> 
#include <stdbool.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int _bin(int);
void replace(int*, int*);
void _replace(int, int);
int* bin(int);
int gcd(int, int);
char _CAP(char c);
char* CAP(char c[]);
int main() {
	/*
	unsigned int speed; //?
	speed = -10;
	printf("%d", speed < 0);//분명 -10인데 0보다 크다는 판정이 뜸.

	const int int1 = 10;*/

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



	/*
	//call back reference
	int a = 10, b = 11;
	_replace(a, b);
	printf("a=%d, b=%d\n", a, b);
	replace(&a, &b);
	printf("a=%d, b=%d\n", a, b);*/


	/*
	//변수 옵션 종류
	auto char a[] = "sfgfgfs";//자동 변수, 함수 사용후 데이터 삭제됨(최적화)
	printf("%s", a);

	static int b = 10;//?
	b = 20;
	printf("%d", b);
	*/
	//사용자 아이디, 패스워드 입력받음.
	//만약 시도 횟수가 일정 한도를 넘었으면 프로그램을 종료함.
	//일치하면 로그인 성공 메시지를 출력한다. 아니면 다시 시도
	//은행 프로그램?
	/*
	char a[100], b[100];
	int score = 0;
	static int criterion=5;
	while (1) {
		static char id[]= "abcd", password[] = "qwer1234";
		printf("아이디 입력: ");
		scanf_s("%s", a);
		printf("\n패스워드 입력: ");
		scanf_s("%s", b);

		if (a == id && b == password){
			printf("로그인 성공!");
			break;
		}
		else {
			if (score < criterion) {
				printf("다시 시도하세요.");
				score += 1;
			}
			else {
				printf("로그인 실패..");
				break;
			}
		}
	}
	*/
	//임의의 10진수를 넘겨받으면 해당되는 2진수를 출력하는 함수
	for (int i = 0; bin(10) == "/0"; i++) {
		printf("%d", bin(10)[i]);
	}

	//최대공약수를 구하는 함수 int gcd(int m, int n)를 만들고 이를 시험하라.. 277쪽 참고
	
	printf("%d", gcd(8, 16));
	
	
	
	//비트 연산자를 이용해 대, 소문자 변환하는 방법을 생각해보라.
	char a[] = "abcdef";
	printf("%s", CAP(a));

	return 0;
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
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void _replace(int n1, int n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
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
int* bin(int n) {
	int bin[100];
	for (int i = 0; n==1; i++) {
		static int r;
		r = n % 2;
		if (r==0) {
			bin[i]= 1;
			n = (n-r)/2;
		}
		else {
			bin[i]= 0;
			n = (n - r) / 2;
		}

	}
	return bin;
}

int gcd(int m, int n) {
	static int a=1;
	for (int i = 1; (i <= m || i<=n); i++) {
		if (m%i==0 && n%i==0) {
			a *= i;
			m = m / a;
			n = n / a;
		}
	}
	return a;
}
