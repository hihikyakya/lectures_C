#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WARNINGS 

int count_word(char*);
int gcd(int,int);//최대 공약수 
int mincomul(int,int); 
int gcdandminco(int,int,int *,int*);
int main() {
	//getchar? getch?
	//_getch? _putch?
	/*
	int ch;
	while((ch=_getch()) != 'q') //실행후 키보드로 q를 누를시 종료함. 
		_putch(ch);
	*/
	
	/*
	char name[100];
	char address[100];
	printf("이름을 입력하시오: ");
	gets(name); //scanf랑 거의 같음 근데 이거 쓰면 좋다는 데? 
	printf("현재 거주하는 주소를 입력하시오: ");
	gets(address);
	puts(name);//get에서 받아서 출력
	puts(address);*/ 
	
	/*
	int c;
	while ((c=getchar()) != EOF) { //EOF는 (char)-1임. 
		if(islower(c)){
			c=toupper(c);
		}
		putchar(c); //이거 안하면 대문자 c 출력 안됨 
	}*/
	/*
	int c;
	
	while((c=getch())!='z') { //키보드로 z입력시 종료 
		printf("------------------\n");
		printf("isdigit(%c)=%d\n",c, isdigit(c)); //숫자인지 검사
		printf("isalpha(%c)=%d\n",c, isalpha(c));//알파벳인지  
		printf("islower(%c)=%d\n",c, islower(c));//소문자인지  
		printf("ispunct(%c)=%d\n",c, ispunct(c));//구두점 문자인지  
		printf("isxdigit(%c)=%d\n",c, isxdigit(c));//16진수 인지 검사  
		printf("isprint(%c)=%d\n",c, isprint(c)); //출력 가능 여부 
		printf("------------------\n\n");
	}
	*/
	/*
	printf("len=%d",count_word("abcㅁsdafswd gwfwae"));
	//글자개수 세는게 아니라 단어 개수 새는 거임.  
	*/
	int a,b;
	int GCD;
	int MINCO;
	printf("정수 2개 입력: ");
	scanf("%d %d",&a,&b);
	gcdandminco(a,b,&GCD,&MINCO);
	printf("\n최대공약수: %d, 최소공배수: %d\n",GCD,MINCO);
	
	return 0;
}

int count_word(char* s){
	int i,wc=0,waiting=1;
	
	for (i=0;s[i]!='\0';i++){
		if(isalpha(s[i])) {
			if(waiting){
				wc++;
				waiting=0;
			}
		}
		else{
			waiting=1;
		}
	}
	return wc;
} 


int gcd(int a,int b){
	int result;
	for(int i=1;(i<=a);i++){
		if((a%i==0) && (b%i==0)){
			result=i;
		}
	}
	return result;
}
int mincomul(int a,int b){
	static int GCD=gcd(a,b);
	
	return (a*b)/GCD;
}
int gcdandminco(int a,int b,int *g,int *m){
	int GCD,MINCO;
	GCD=gcd(a,b);
	MINCO=mincomul(a,b);
	*g=GCD;
	*m=MINCO;
}
