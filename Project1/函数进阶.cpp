#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
//1.strcpy 拷贝函数
//int main() {
//	char arr1[] = "bit";
//	char arr2[20] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s\n",arr2);
//	return 0;
//}


//2.memset  内存设置函数
//int main() {
//	//将前五个字符设置为*号
//	char arr[] = "hello world";
//	memset(arr,'*',5);
//	printf("%s\n", arr);
//	return 0;
//}
//


//3.自定义函数
//int get_max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//传参
//	int max=get_max(a,b);
//	//调用函数
//	max = get_max(200, 300);
//	printf("max=%d\n", max);
//	return 0;
//}

//写一个函数交换两个变量整形内容
//用指针变量开辟空间接收存的地址
//void Swap(int* pa, int* pb) {
//	int tmp = 0;
//	tmp= *pa;//解引用,查看a的地址  将a的值赋值给中间储存量
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

//1.写一个函数可以判断一个数是不是素数
#include<stdio.h>
#include<math.h>
//int is_price(int n) {
//	//是素数返回1，不是返回0
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
//		//判断i是否为素数
//		if (is_price(i) == 1) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//

//2.打印1000-2000之间的闰年
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
//		//判断year是否为闰年
//		if (is_leap_year(year) == 1) {
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



//3.二分查找
//在一个有序数组中查找具体某个数
//如果找到了这个数的下标，找不到的返回-1
//数组本质上是一个指针
//int binarry_search(int arr[], int k,int sz) {
//	//算法的实现
//	//找中间元素的下标
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right) {
//		int mid = (left + right) / 2;//中间元素下标
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组个数
//	int ret=binarry_search(arr,k,sz);
//	if (ret == -1) {
//		printf("找不到");
//	}
//	else {
//		printf("找到了,下表是 %d\n",ret);
//	}
//	return 0;
//}


//4.设计函数，每次调用加1
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
//	//43是两个字符 打印2 2为一个字符 打印1
//	printf("%d", printf("%d", printf("%d",43)));//4321
//	return 0;
//}



//函数声明
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
//函数的定义
//int Add(int x, int y) {
//	int z = x + y;
//	return z;
//}
