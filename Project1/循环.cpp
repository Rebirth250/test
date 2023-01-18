#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>;
int main() {
	int line = 0;
	printf("初学者\n");
	while (line < 20000) {
		printf("敲代码1行%d\n",line);
		line++;
	}
	if(line>=20000)
	printf("大牛  拿到好offer");
	return 0;
}