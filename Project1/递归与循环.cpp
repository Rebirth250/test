#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//最简单递归
//int main() {
//	printf("hehe\n");
//	main();
//	return 0;
//}


//接受一个整形数,按照顺序打印它的每一位

//void print(int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main(){
//
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归
//	print(num);
//	return 0;
//}


//递归的方法解决
//int my_strlen(char* str) {
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else {
//		return 0;
//	}
//}
////把大事化小
////my_strlen("bit");
////
//
////求一个字符串的长度
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char arr[] = "bit";
//	//计算字符串的长度,arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	int len=my_strlen(arr);
//	printf("len= %d\n", len);
//	return 0;
//}
//

////求阶乘
////循环
//int Facl(int n) {
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++) {
//		ret *= i;
//	}
//	return ret;
//}
////阶乘
//int Facl2(int a) {
//	if (a <= 1)
//		return 1;
//	else
//		return a * Facl2(a - 1);
//}
//
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl2(n);
//	printf("%d\n", ret);
//	return 0;
//}



//求第n的斐波那契数
// 递归---计算量大
//int Fib(int n) {
//	if (n <= 2) 
//		return 1;
//	else 
//		return Fib(n - 1) + Fib(n - 2);
//
//	}

//循环---计算量小
//int Fib(int n) {
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2) {		
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//void test(int n) {
//	if (n < 10000) {
//		test(n + 1);
//	}
//}
//int main() {
//	test(1);
//	return 0;
//}


