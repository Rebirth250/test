#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//��򵥵ݹ�
//int main() {
//	printf("hehe\n");
//	main();
//	return 0;
//}


//����һ��������,����˳���ӡ����ÿһλ

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
//	//�ݹ�
//	print(num);
//	return 0;
//}


//�ݹ�ķ������
//int my_strlen(char* str) {
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else {
//		return 0;
//	}
//}
////�Ѵ��»�С
////my_strlen("bit");
////
//
////��һ���ַ����ĳ���
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char arr[] = "bit";
//	//�����ַ����ĳ���,arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	int len=my_strlen(arr);
//	printf("len= %d\n", len);
//	return 0;
//}
//

////��׳�
////ѭ��
//int Facl(int n) {
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++) {
//		ret *= i;
//	}
//	return ret;
//}
////�׳�
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



//���n��쳲�������
// �ݹ�---��������
//int Fib(int n) {
//	if (n <= 2) 
//		return 1;
//	else 
//		return Fib(n - 1) + Fib(n - 2);
//
//	}

//ѭ��---������С
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


