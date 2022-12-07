#include <stdio.h>
#define MAX_SIZE 100
#define USA
#define DEBUG
#ifndef PI
#define PI 3.141592
#endif
#ifndef SQUARE
#define SQUARE(r) (r)*(r)
#endif
double area(double radius){
	double result=0.0;
#ifdef DEBUG
#ifdef USA
	printf("area(%f) is called \n",radius);
#else
	printf("area(%f)가 호출되었음",radius);
#endif
#endif
	result=PI*SQUARE(radius);
	return result;
}

int main() {
	printf("%d",area(MAX_SIZE));
	
	//집가서 이중 포인터로 행렬 만들어보기! 
	return 0;
}
