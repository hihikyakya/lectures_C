#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

typedef struct student{
	int number;
	char name[20];
	double gpa;
}Student;

int main(){
	/*
	Student table[SIZE]={
		{1,"Kim",3.99},
		{2,"Min",2.68},
		{3,"Lee",4.01}
	};
	
	Student s;
	FILE *fp=NULL;
	int i;
	if ((fp=fopen("student.dat","wb"))==NULL){
		fprintf(stderr,"출력을 위한 파일을 열수 없습니다. \n");
		exit(1);
	}
	
	//배열을 파일에 저장함
	fwrite(table,sizeof(Student),SIZE,fp);
	fclose(fp);
	//이진 파일을 읽기 모드로 연다.
	if ((fp=fopen("student.dat","wb"))==NULL){
		fprintf(stderr,"출력을 위한 파일을 열수 없습니다. \n");
		exit(1);
	}
	for(i=0;i<SIZE;i++){
		fread(&s,sizeof(Student),1,fp); //한줄씩 파일에 입력된것을 찾는다. 
		printf("학번=%d,이름=%s,평점=%lf\n",s.number,s.name,s.gpa);
	}
	fclose(fp);*/
	/*
	//파일내용을 다른 파일로 옮 
	FILE *fp1,*fp2;
	char file1[100],file2[100];
	char buffer[1024];
	int count;
	printf("첫번째 파일 이름:");
	scanf("%s",file1);
	printf("두번째 파일 이름: ");
	scanf("%s",file2);
	if((fp1=fopen(file1,"rb"))==NULL){
		fprintf(stderr,"출력을 위한 파일을 열수 없습니다. \n");
		exit(1);
	} 
	if((fp2=fopen(file2,"rb"))==NULL){
		fprintf(stderr,"출력을 위한 파일을 열수 없습니다. \n");
		exit(1);
	} 
	while((count=fread(buffer,sizeof(char),1024,fp1)) >0){
		fwrite(buffer,sizeof(char),count,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	*/
	
	
	//len만큼의 파일을 생성하는 프로그램 만들기. 
	int len=10;
	FILE **fp=(FILE**)malloc(sizeof(FILE)*len);
	for(int i=0;i<len;i++){
		char* string=gets();
		fwrite()
	}
	return 0;
}
