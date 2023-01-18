#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%s\n", arr1); //"abc"--'a' 'b' 'c' '\0'  '\0'表示字符串的结束标志
//	printf("%s\n", arr2); // "会打印随机值,直到打印到\0结束"
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//
//}

int main() {
	int input = 0;
	printf("年薪30万\n");
	printf("想要?<1/0>\n");
	scanf("%d", &input);
	if (input == 1)
		printf("要");
	else
		printf("不要");
}

