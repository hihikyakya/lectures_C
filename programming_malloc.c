#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct book{
	int number;
	char* title;
};
int main(){
	/*
	int *p;
	int a=30,b=20,c=10;
	p=(int *)malloc(100*sizeof(int));
	
	*p=a;
	*(p+1)=b;
	*(p+2)=c;
	
	
	for(int i=0;i<1000;i++)
		printf("%u",*(p+i));
	*/
	
	book *pb;
	pb=(book *)malloc(2*sizeof(book));
	if(pb==NULL){
		printf("메모리할당오류\n");
	}
	pb[0].number=1;
	strcpy(pb[0].title,"C Programming");
	pb[1].number=2;
	strcpy(pb[1].title,"Data Structure");
	free(pb); //동적메모리가 할당된 포인터를 해제시켜줌. 
	return 0;
}
