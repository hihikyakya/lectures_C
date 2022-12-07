#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
#define USA
#define DEBUG
#ifndef PI
#define PI 3.141592
#endif
#ifndef SQUARE
#define SQUARE(r) (r)*(r)
#endif
int** make_matrix(int rows, int column);
int** make_matrix2(int rows, int column,int* inputs);
int** mat_sum(int** mat1, int** mat2);
int** mat_sub(int** mat1, int** mat2);

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
	//printf("%d",area(MAX_SIZE));
	
	//이중 포인터로 행렬 만들어보기! 
	int *input1;
	int *input2;
	int arr_input1[3]={1,2,3},arr_input2[5]={1,3,4,5,6};
	input1=arr_input1;
	input2=arr_input2;
	int **mat1=make_matrix2(1,2,input1);
	int **mat2=make_matrix2(2,3,input2);
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			printf("%d ",mat1[i][j]);		
		}
		printf("\n");
	}
	int **mat=mat_sum(mat1,mat2);
	return 0;
}
int** make_matrix(int rows, int column){
	
	static int **mat=(int **)malloc(sizeof( int *));
	for(int i=0;i<rows;i++){
		mat[i]=(int *) malloc(sizeof(int)*column);
	}
	return mat;
}

int** make_matrix2(int rows, int column, int* inputs){
	
	static int **mat=(int **)malloc(sizeof( int *));
	for(int i=0;i<rows;i++){
		mat[i]=(int *) malloc(sizeof(int)*column);
		if(i*column<sizeof(inputs)){
			for(int j=0;j<column;j++){
				mat[i][j]=inputs[i*j];	
			}
		}
	}
	return mat;
}
int** mat_sum(int** mat1, int** mat2){
	static int** mat=mat1;
	for(int i=0;i<sizeof(mat1);i++){
		for(int j=0;j<sizeof(mat1[0]);j++){
			mat[i][j]=mat1[i][j]+mat2[i][j];	
		}
	}
	return mat;
}
int** mat_sub(int** mat1, int** mat2){
	static int** mat=mat1;
	for(int i=0;i<sizeof(mat1);i++){
		for(int j=0;j<sizeof(mat1[0]);j++){
			mat[i][j]=mat1[i][j]-mat2[i][j];	
		}
	}
	return mat;
}
