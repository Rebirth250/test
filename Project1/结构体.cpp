#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>


//����һ��ѧ��
//���� ���� �绰 �Ա�
//�ṹ��ؼ���--struct   �ṹ���ǩ--stu    �ṹ������-- struct stu
//struct stu
//{
//	��Ա����
//	short age;
//	char name[20];
//	char sex[5];
//	char tele[12];
//}s1,s2,s3;//����ȫ�ֵĽṹ�����
//
//
//
//�� struct stu �����������
//typedef struct stu
//{
//	��Ա����
//	short age;
//	char name[20];
//	char sex[5];
//	char tele[12];
//}stu;
//
//int main() {
//	ʹ�ýṹ�����ʹ�������
//	struct stu s = {18,"����","Ů",19530165130};  //�ֲ��Ľṹ�����
//	stu s1 = {15,"jack","��",15249287076};
//	return 0;
//}

//
////�ṹ���а����ṹ��
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
//	//��ʼ��
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
////���͵��������ṹ��     �ռ��˷�   ��ʱ����
//void Print1(Stu tmp) {
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
////���͵��ǵ�ַ  ���п죬������̫���ڴ�
//void Print2(Stu* tmp) {
//	printf("name:%s\n", tmp->name);
//	printf("age:%d\n", tmp->age);
//	printf("tele:%s\n", tmp->tele);
//	printf("sex:%s\n", tmp->sex);
//}
//
//int main() {
//	Stu s = {"����",40,"19530165130","��"};
//	//��ӡ�ṹ������
//	//print1��print2�ĸ��ã�
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