#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
//1.strcpy ��������
//int main() {
//	char arr1[] = "bit";
//	char arr2[20] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s\n",arr2);
//	return 0;
//}


//2.memset  �ڴ����ú���
//int main() {
//	//��ǰ����ַ�����Ϊ*��
//	char arr[] = "hello world";
//	memset(arr,'*',5);
//	printf("%s\n", arr);
//	return 0;
//}
//


//3.�Զ��庯��
//int get_max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//����
//	int max=get_max(a,b);
//	//���ú���
//	max = get_max(200, 300);
//	printf("max=%d\n", max);
//	return 0;
//}

//дһ��������������������������
//��ָ��������ٿռ���մ�ĵ�ַ
//void Swap(int* pa, int* pb) {
//	int tmp = 0;
//	tmp= *pa;//������,�鿴a�ĵ�ַ  ��a��ֵ��ֵ���м䴢����
//	*pa = *pb;
//	*pb=tmp;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	Swap(&a, &b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//
//

//1.дһ�����������ж�һ�����ǲ�������
#include<stdio.h>
#include<math.h>
//int is_price(int n) {
//	//����������1�����Ƿ���0
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++) {
//		if (n %j == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main() {
//	int i = 0;
//	for (i = 1; i <= 200; i++) {
//		//�ж�i�Ƿ�Ϊ����
//		if (is_price(i) == 1) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//

//2.��ӡ1000-2000֮�������
//int is_leap_year(int y) {
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int main() {
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) {
//		//�ж�year�Ƿ�Ϊ����
//		if (is_leap_year(year) == 1) {
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



//3.���ֲ���
//��һ�����������в��Ҿ���ĳ����
//����ҵ�����������±꣬�Ҳ����ķ���-1
//���鱾������һ��ָ��
//int binarry_search(int arr[], int k,int sz) {
//	//�㷨��ʵ��
//	//���м�Ԫ�ص��±�
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right) {
//		int mid = (left + right) / 2;//�м�Ԫ���±�
//		if (arr[mid] < k) {
//			left = mid - +1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����������
//	int ret=binarry_search(arr,k,sz);
//	if (ret == -1) {
//		printf("�Ҳ���");
//	}
//	else {
//		printf("�ҵ���,�±��� %d\n",ret);
//	}
//	return 0;
//}


//4.��ƺ�����ÿ�ε��ü�1
//void Add(int* p) {
//	(*p)++;
//}
//
//int main() {
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


#include<stdio.h>
//int main() {
//	//43�������ַ� ��ӡ2 2Ϊһ���ַ� ��ӡ1
//	printf("%d", printf("%d", printf("%d",43)));//4321
//	return 0;
//}



//��������
//int Add(int x, int y);
#include "add.h"
int main() {
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//�����Ķ���
//int Add(int x, int y) {
//	int z = x + y;
//	return z;
//}
