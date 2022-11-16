#include <stdio.h>
struct tag{
		int number;
		char name[10];
		double grade;
};
int main(){
	tag t;
	t.number=100;
	printf("%d",t.number);
	return 0;
}
