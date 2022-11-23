//집가서 해야함
//sum.c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	//포인터 배열 
	/*
	int a, b, c, d, e;
	int* p[5] = { &a,&b,&c,&d,&e };
	*/
	int sum = 0;
	for (int i = 0; i < sizeof(argv)/sizeof(argv[0]); i++) {
		sum+=atof(argv[i]);
	}
	return 0;
}
//comp.c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int arg_length = 3;
	if (arg_length == sizeof(argv) / sizeof(argv[0])) {
		char mod = argv[3];
		if(mod=="+")
			printf("result: %d+%d=%d",atof(argv[0]), atof(argv[1]),
				atof(argv[0])+atof(argv[1])); //덧셈 입력
		else if (mod == "-")
			printf("result: %d-%d=%d", atof(argv[0]), atof(argv[1]),
				atof(argv[0]) - atof(argv[1])); //뺄셈 입력
		else if (mod == "*")
			printf("result: %d*%d=%d", atof(argv[0]), atof(argv[1]),
				atof(argv[0]) * atof(argv[1])); //곱셈 입력
		else
			printf("result: %d/%d=%d", atof(argv[0]), atof(argv[1]),
				atof(argv[0]) / atof(argv[1])); //나눗셈 입력
	}
	return 0;
}
//show.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
	for (int i = 0;i<sizeof(argv)/sizeof(argv[0]); i++) {
		for (int j = 0; j < sizeof(argv) / sizeof(argv[0]); j++) {
			argv = strcmp(argv[i], argv[j]);
		}
	}
	for (int i = 0; i < sizeof(argv) / sizeof(argv[0]); i++)
		printf("%s\n", argv[i]);
	return 0;
}
