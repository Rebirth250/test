#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>;
//int Add(int x, int y) {  
//	//������
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
//	//int arr[10]; //����һ�����10���������ֵ�����
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
//	//<< ���ƶ�   �ƶ����Ƕ�����λ
//	//>> ���� 
//	int a = 1;
//	//����1ռ4���ֽ� -32��bitλ
//	int b=a << 1;
//	int c = a >> 1;
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}

//��λ�� ȫ��Ϊ��
//int main() {
//	int a = 3;  //011
//	int b = 5;  //101
//	int c = a & b;//001
//	printf("%d\n", c);
//}

//��λ�� ��������
//int main() {
//	int a = 3;//011
//	int b = 5;//101
//	int c = a | b;//111
//	printf("%d\n", c);//7
//}

//��� ��ʾ��Ӧ�Ķ�����λ��ͬ��Ϊ0 ����Ӧ�Ķ�����λ������Ϊ1 
//int main() {
//	int a = 3;  //011
//	int b = 5; //101
//	int c = a ^ b; //110
//	printf("%d\n", c);  //6
//}

//��ֵ������
//int main() {
//	int a = 10;
//	a = 20; //  =��ֵ   == �ж����
//	a = a + 10;
//	a += 10;
//	a = a - 20;
//	a-=20;
//	return 0;
//}
// 

//��λȡ��
//�������ڴ��д洢��ʱ�򣬴���Ƕ����ƵĲ���
//int main() {
//	int a = 0;  //00000000000000000000000000000000
//	int b = ~a;   //11111111111111111111111111111111     //b���з��ŵ�����
//	printf("%d", b);  //��ӡ�����������Դ��
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
//	//ǿ������ת��
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}

//#define �����ʶ������
//#define MAX 100;
//��Ķ���
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


//ָ��  ���´�����p��ָ��
//int main() {
//	int a = 10;
//	//*  ��������ò�����
//	int *p = &a;  //ȡ��ַ
//	*p = 20; //������
//	printf("%d\n", a);
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	return 0;
//}

//int main() {
//	int age = 98;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 90)
//		printf("׳��\n");
//	else if(age > 90)
//		printf("�ϲ���\n");
//	return 0;
//}


//#include<string.h>;
////����һ���ṹ������
//struct book {
//	char name[20];//c���Գ������
//	short price; //55
//};
//int main() {
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct book b1 = {"c���Գ������",55};
//	//�ַ�����������  ���Ľṹ������  ��Ҫ����ͷ�ļ� string.h
//	strcpy(b1.name, "c++");
//	printf("%s\n", b1.name);
//
//	struct book* pb = &b1;
//	//ָ��д��
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	//��дָ��ṹ
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//����д��
//	//. �ṹ�����.��Ա
//	//-> �ṹ��ָ��->��Ա��
//	/*printf("����:%s\n", b1.name);
//	printf("�۸�:%d\n", b1.price);*/
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�:%d\n", b1.price);
//	return 0;
//}
