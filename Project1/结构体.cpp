#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>


//描述一个学生
//名字 年龄 电话 性别
//结构体关键字--struct   结构体标签--stu    结构体类型-- struct stu
//struct stu
//{
//	成员变量
//	short age;
//	char name[20];
//	char sex[5];
//	char tele[12];
//}s1,s2,s3;//三个全局的结构体变量
//
//
//
//将 struct stu 重新起个名字
//typedef struct stu
//{
//	成员变量
//	short age;
//	char name[20];
//	char sex[5];
//	char tele[12];
//}stu;
//
//int main() {
//	使用结构体类型创建变量
//	struct stu s = {18,"旺财","女",19530165130};  //局部的结构体变量
//	stu s1 = {15,"jack","男",15249287076};
//	return 0;
//}

//
////结构体中包含结构体
//struct  S
//{
//	int a; 
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T {
//	char ch[10];
//	struct S s;
//	char* pc;
//
//};
//
//int main()
//{
//	//初始化
//	char arr[] = "hello,bit\n";
//	struct T t = { "hehe",{100,'w',"hello,world",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}
#include<stdio.h>
//typedef struct Stu {
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
////传送的是整个结构体     空间浪费   临时拷贝
//void Print1(Stu tmp) {
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
////传送的是地址  运行快，不消耗太多内存
//void Print2(Stu* tmp) {
//	printf("name:%s\n", tmp->name);
//	printf("age:%d\n", tmp->age);
//	printf("tele:%s\n", tmp->tele);
//	printf("sex:%s\n", tmp->sex);
//}
//
//int main() {
//	Stu s = {"李四",40,"19530165130","男"};
//	//打印结构体数据
//	//print1和print2哪个好？
//	Print1(s);
//	Print2(&s);
//	return 0;
//}




int Add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;
}

int main() {
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);
	return 0;
}