#include <stdio.h>
#include <math.h>

struct tag {
	int number;
	char name[10];
	double grade;
};

struct point {
	int x, y;
};

struct dynamic_list {
	int number;
	char string[100];
	float f;
	double d;
};
struct vector {
	int x, y;
};

typedef struct _Complex {
	double real;
	double imag;
}Complex;

double getdistance(struct point, struct point);
struct vector getVectorSum(struct vector, struct vector);
double Combination(double n, double r);
Complex complex_sum(Complex c1, Complex c2);
Complex complex_sub(Complex c1, Complex c2);
Complex complex_div(Complex c1, Complex c2);
Complex complex_mul(Complex c1, Complex c2);
int main() {
	/*
	struct tag t;
	t.number=100;
	printf("%d\n",t.number);
	t.grade=4.5;
	printf("tag's grade:%lf\n",t.grade);

	struct point p1,p2;
	printf("첫번째 점 입력:");
	scanf("%d %d",&p1.x,&p1.y);
	printf("두번째 점 입력:");
	scanf("%d %d",&p2.x,&p2.y);
	double distance=getdistance(p1,p2);
	printf("%lf\n",distance);
	int a=10;
	struct dynamic_list dl[2]={{10,"안녕",20.4,120},{10,"안녕",20.4,120}};
	*/


	//vector sum
	struct vector v1= { 10,30 }, v2= { 1,3 };;
	struct vector v = getVectorSum(v1, v2);

	printf("벡터의 합은 %d i + %d j 입니다.\n", v.x, v.y);

	Complex c1= { 1,20 }, c2= { 3,-10 };

	Complex c_sum, c_div, c_sub, c_mul;
	c_sum = complex_sum(c1, c2);
	c_sub = complex_sub(c1, c2);
	c_div = complex_div(c1, c2);
	c_mul = complex_mul(c1, c2);
	printf("%lf + %lf i\n", c_sum.real, c_sum.imag);
	printf("%lf + %lf i\n", c_sub.real, c_sub.imag);
	printf("%lf + %lf i\n", c_mul.real, c_mul.imag);
	printf("%lf + %lf i\n", c_div.real, c_div.imag);

	return 0;
}
double getdistance(struct point p1, struct point p2) {
	double square = (double)((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	return sqrt(square);
}
double Combination(double n, double r) {
	double fact1 = 1, fact2 = 1, fact3 = 1;
	for (double i = 1; i <= n; i++) {
		fact1 = fact1 * i;
	}
	for (double i = 1; i <= r; i++) {
		fact2 = fact2 * i;
	}
	for (double i = 1; i <= n - r; i++) {
		fact3 = fact3 * i;
	}

	return n == 0 ? 1 : fact1 / (fact2 * fact3);
}
struct vector getVectorSum(struct vector v1, struct vector v2) {
	struct vector sum_v;
	sum_v.x = v1.x + v2.x;
	sum_v.y = v1.y + v2.y;
	return sum_v;
}

Complex complex_sum(Complex c1, Complex c2) {
	Complex sum = { c1.real + c2.real,c1.imag + c2.imag };
	return sum;
}
Complex complex_sub(Complex c1, Complex c2) {
	Complex sub = { c1.real - c2.real,c1.imag - c2.imag };
	return sub;
}
Complex complex_div(Complex c1, Complex c2) {
	double factor = c2.real * c2.real + c2.imag * c2.imag;
	Complex div= { (c1.real * c2.real + c1.imag * c2.imag) / factor,(c1.imag * c2.real - c1.real * c2.imag) / factor };
	return div;
}
Complex complex_mul(Complex c1, Complex c2) {
	Complex mul={ c1.real * c2.real - c1.imag * c2.imag,c1.real * c2.imag + c1.imag * c2.real };
	return mul;
}
