#include <stdio.h>
#include <string.h>

void swap(int *,int *);
float* get_line_parameter(int,int,int,int);
void get_line_Volume(int x1,int x2,int*,int*);
void get_size_all(int line, int volume, int* size);
int main() {
	/*
	int a = 10,b=20;
	printf("a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d,b=%d\n",a,b);
	*/

	/*
	float* parameters;
	parameters = get_line_parameter(3, 1, 10, 5);
	for (int i = 0; i <= (sizeof(*parameters) / sizeof(float))+1;i++);
		printf("%f", *(parameters+i));
	*/
	
	/*
	int line, volume,size;

	get_line_Volume(10,20,&line,&volume);

	printf("line=%d,volume=%d\n", line, volume);
	get_size_all(line,volume,&size);
	printf("size=%d", size);*/
	
	/*
	float* parameters;
	parameters = get_line_parameter(0, 0, 2, 2);
	printf("기울기:%f, y절편: %f",*(parameters),*(parameters+1));
	*/
	
	//문자열 복사하기 
	char src[]="SDFSGREGSRAHREHREFG";
	char abc[sizeof(src)/sizeof(char)];
	for(int i=0; src[i]!='\0';i++){
		abc[i]=src[i];
	}
	printf("abc=%s,k src=%s\n",abc,src);
	
	//문자열의 길이 
	char str[]="Hello World!";
	printf("str의 크기: %d\n", sizeof(str)/sizeof(char));
	
	strcpy("hello",str);
	printf("%s\n",str);
	return 0;
}

void swap(int *a,int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

float* get_line_parameter(int x1, int y1, int x2, int y2) {
	static float arr[2];
	float parameter1 = (((float)y1 - (float)y2) / ((float)x1 - (float)x2));
	arr[0] = parameter1;
	arr[1] = (float) y2 - parameter1 * (float) x2;
	return arr;
}

void get_line_Volume(int x1, int x2, int* line, int* volume) {
	*line = x1 - x2;
	if (*line < 0) {
		*line = -*line;
	}
	int temp = *line;
	int v=1;
	for (int i = 0; i < 3; i++) {
		v *= temp;
	}
	*volume = v;
}
void get_size_all(int line,int volume,int* size) {
	*size = volume / line;
	*size *= 6;
}
