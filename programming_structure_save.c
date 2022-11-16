#include <stdio.h>

struct tag{
		int number;
		char name[10];
		double grade;
};

struct point{
	int x,y;
};
double getdistance(struct point,struct point);
double Combination(double n, double r);
int main(){
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
	
	
	return 0;
}
double getdistance(struct point p1,struct point p2){
	double square=(double)((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
	double _s=square-1;
	double tmp=_s;
	double distance=1;
	for(double i=0;i<100;i++){
		distance+=Combination(1/2,i)*_s;
		_s*=tmp;
	}
	return distance;
}
double Combination(double n,double r){
	double fact1=1,fact2=1,fact3=1;
	for(double i=1;i<=n;i++){
		fact1=fact1*i;
	}
	for(double i=1;i<=r;i++){
		fact2=fact2*i;
	}
	for(double i=1;i<=n-r+1;i++){
		fact3=fact3*i;
	}
	
	return fact1/(fact2*fact3);
}
