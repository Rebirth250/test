#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%s\n", arr1); //"abc"--'a' 'b' 'c' '\0'  '\0'��ʾ�ַ����Ľ�����־
//	printf("%s\n", arr2); // "���ӡ���ֵ,ֱ����ӡ��\0����"
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//
//}

int main() {
	int input = 0;
	printf("��н30��\n");
	printf("��Ҫ?<1/0>\n");
	scanf("%d", &input);
	if (input == 1)
		printf("Ҫ");
	else
		printf("��Ҫ");
}

