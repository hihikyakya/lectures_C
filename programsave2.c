#include <stdio.h> 
#include <stdbool.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main() {
	unsigned int speed; //?
	speed = -10;
	//printf("%d", speed==10);
	
	const int int1=10;
	
	//int1 = 20 -> error;
	printf("%d", (int1));
	return 0;
}
