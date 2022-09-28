#include <stdio.h> 
#include <stdbool.h>
#include <math.h>
#include <cmath>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

double round(double);
int main() {
	unsigned int speed; //?
	speed = -10;
	//printf("%d", speed==10);
	
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
	
	//1.47이란 숫자를 주고 반올림하기
	double ROUND,num=1.6;
	ROUND=round(num);
	printf("%f",ROUND);
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
