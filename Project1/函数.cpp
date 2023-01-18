#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>;
//int Add(int x, int y) {  
//	//函数体
//	int z = x + y;
//	return z;
//}
//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	int a = 100;
//	int b = 200;
//	int sum = 0;
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main() {
//	//int arr[10]; //定义一个存放10个整数数字的数组
//	//char ch[20];
//	//float arr2[5];
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10) {
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//


//int main() {
//	//<< 左移动   移动的是二进制位
//	//>> 右移 
//	int a = 1;
//	//整型1占4个字节 -32个bit位
//	int b=a << 1;
//	int c = a >> 1;
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}

//按位与 全真为真
//int main() {
//	int a = 3;  //011
//	int b = 5;  //101
//	int c = a & b;//001
//	printf("%d\n", c);
//}

//按位或 有真则真
//int main() {
//	int a = 3;//011
//	int b = 5;//101
//	int c = a | b;//111
//	printf("%d\n", c);//7
//}

//异或 表示对应的二进制位相同则为0 ，对应的二进制位相异则为1 
//int main() {
//	int a = 3;  //011
//	int b = 5; //101
//	int c = a ^ b; //110
//	printf("%d\n", c);  //6
//}

//赋值操作符
//int main() {
//	int a = 10;
//	a = 20; //  =赋值   == 判断相等
//	a = a + 10;
//	a += 10;
//	a = a - 20;
//	a-=20;
//	return 0;
//}
// 

//按位取反
//负数在内存中存储的时候，存的是二进制的补码
//int main() {
//	int a = 0;  //00000000000000000000000000000000
//	int b = ~a;   //11111111111111111111111111111111     //b是有符号的整型
//	printf("%d", b);  //打印的是这个数的源码
//	return 0;
//}

//int main() {
//	int a = 10;
//	int b = ++a;  // 11 11
//	int b = a++; //11 10
//	printf("%d%d", a, b);
//	return 0;
//}

//int main() {
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}

//#define 定义标识符常量
//#define MAX 100;
//宏的定义
//#define MAX(X,Y)(X>Y?X:Y)
//int main() {
//	//int a=MAX;
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	max = MAX(a, b);
//	//max=a>b?a:b
//	return 0;
//}


//指针  如下代码中p是指针
//int main() {
//	int a = 10;
//	//*  代表解引用操作符
//	int *p = &a;  //取地址
//	*p = 20; //解引用
//	printf("%d\n", a);
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	return 0;
//}

//int main() {
//	int age = 98;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 90)
//		printf("壮年\n");
//	else if(age > 90)
//		printf("老不死\n");
//	return 0;
//}


//#include<string.h>;
////创建一个结构体类型
//struct book {
//	char name[20];//c语言程序设计
//	short price; //55
//};
//int main() {
//	//利用结构体类型创建一个该类型的结构体变量
//	struct book b1 = {"c语言程序设计",55};
//	//字符串拷贝函数  更改结构的属性  需要引用头文件 string.h
//	strcpy(b1.name, "c++");
//	printf("%s\n", b1.name);
//
//	struct book* pb = &b1;
//	//指针写法
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	//简写指针结构
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//正常写法
//	//. 结构体变量.成员
//	//-> 结构体指针->成员与
//	/*printf("书名:%s\n", b1.name);
//	printf("价格:%d\n", b1.price);*/
//	b1.price = 15;
//	printf("修改后的价格:%d\n", b1.price);
//	return 0;
//}
