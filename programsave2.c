#include <stdio.h> 
#include <stdbool.h>
#include <math.h>
#include <cmath>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

double round(double);
char* CAP(char[]);
char _CAP(char);
int _bin(int);
int bin(int);
int main() {
	unsigned int speed; //?
	speed = -10;
	printf("%d", speed<0);//분명 -10인데 0보다 크다는 판정이 뜸. 
	
	const int int1=10;
	
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
    
	//binary값 출력하기
    
	return 0;
}
double round(double a){
	int num=(int)a;
	if ((a-num)>0.5){
		return ceil(a);
	}
	else{
		return floor(a);
	}
}

char _CAP(char c){
	int V=(int)'Z'-(int)'z';
	int _c=(int)c;
	int _a=(int)'a';
	int _z=(int)'z';
	if(_c>=_a && _c<=_z){
		int CAPITAL=(int)c+V;
		return (char)CAPITAL;
	}
	else{
		return c;
	}
}

char* CAP(char c[]){
	for(int i=0;c[i]!='\0';i++){
		c[i]=_CAP(c[i]);
	}
	return c;
}

int _bin(int n){
	if(n%2!=0){
		int re=n%2;
		return (int)(n-re)/2;
	}
	else{
		return n/2;
	}
}

int bin(int n){
	int ints[]=int[]{};
	for(int i=0; ;i++)
		if((_bin(n)==n/2)){
			ints[i]=1;
		}
		else{
			ints[i]=0;
		}
		n=(n-n%2)/2;
}
