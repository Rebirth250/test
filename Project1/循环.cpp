#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>;
int main() {
	int line = 0;
	printf("��ѧ��\n");
	while (line < 20000) {
		printf("�ô���1��%d\n",line);
		line++;
	}
	if(line>=20000)
	printf("��ţ  �õ���offer");
	return 0;
}