#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//����else  else���������δƥ���if����ƥ��
//int main() {
//	int a = 0;
//	int b = 2;
//	//ֻ��a����1��ʱ��Ż�����ж�
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("a\n");
//		else
//			printf("b\n");
//	}
//	return 0;
//	
//}

//else �����
//int main() {
//	int age = 10;
//	if (age > 10)
//		printf("��");
//	else
//	{
//		if (age < 10)
//			printf("");
//	}
//
//
//}


//����һ�����ж���ż�� ����һ
//int main() {
//	int num1;
//	int num = scanf("%d",&num1);
//	if (num1% 2 == 0)
//		printf("�������ż��");
//	else
//		printf("�����������");
//	return 0;
//}


//������
//int main() {
//	int num1;
//	int num = scanf("%d", &num1);
//	int num3 = num1 % 2 == 0;
//	num3 ? printf("ż��") : printf("����");
//		return 0;
//}



//���1-100�ڵ����� ����һ
//int main() {
//	for (int i = 0; i < 100; i++) {
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//}

//������
//int main() {
//	int i = 1;
//	while (i <= 100) {
//		if(i%2==1)
//			printf("%d\n", i);
//		i ++;
//	}
//	return 0;
//}
//
////switch��ϰ
//int main() {
//
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n) {
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d", m, n);
//	return 0;
//}


//while
//int main() {
//	int i = 1;
//	while (i <= 10) {
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//

//
//int main(){
//	int ch = getchar(); //��ȡ�����ֵ
//	putchar(ch);  //�����ȡ�������ֵ
//	return 0;
//}


////ģ��ȷ������
//#include<string.h>
//int main() {
//	int ch = 0;
//	int ret = 0;
//	char password[20] = {0};
//	printf("����������:");
//	scanf("%s", password);
//	//���û�ж���\n�Ļ�����һֱ��ȡ����
//	while ((ch = getchar()) != '\n') {
//
//	}
//	printf("��ȷ��y/n:");
//	ret = getchar();
//	if (ret=='y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��");
//	}
//	return 0;
//}


//��ȡ�����ַ�
//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//do while ѭ��
//int main() {
//	int i = 1;
//	do {
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	//����������ʱ�᷵�ص�do�У��������������������
//	while (i <=10);
//	return 0;
//
//}

//����n�Ľ׳�
//int main() {
//	int i;
//	int n;
//	int fact = 1;
//	int num=scanf("%d", &n);
//	for (i = 1; i<=n; i++) {
//		fact*= i;
//	}
//	printf("fact=%d", fact);
//	return 0;
//}




//����3�Ľ׳�
//int main() {
//	int i=0;
//	int n=0;
//	int ret = 1;
//	int sum= 0;
//	for (n = 1; i <= 3; n++) {
//		ret = 1;
//		for (i = 1; i <= n; i++) {
//			ret = ret * i;
//		}
//		sum += ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}


//�Ż� 3�Ľ׳�
//int main() {
//	int n=0;
//	int ret = 1;
//	int sum= 0;
//	for (n = 1; n<= 3; n++) {
//		ret *= n;
//		sum += ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}


//
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ�����룬���������ҵ�7
//	int i = 0;
//	//�������Ŀռ�  / ÿ��������ռ�Ŀռ�=����Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("�ҵ��ˣ��±��ǣ�%d\n",i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//
//}
//
//int main() {
//	int r = 0;
//	int randomNumber = 150;
//	int num2 = 0;
//	scanf("%d\n", &num2);
//	while (r==0) {
//		if (num2 > 150) {
//			printf("�´���\n");
//			break;
//		}
//		if (num2< 150) {
//			printf("��С��\n");
//			break;
//		}
//		if (num2== 150) {
//			printf("�¶���");
//			return 0;
//		}
//	}
//	
//}


////���ֲ���
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1; //���±�
//	int left = 0;//���±�
//	int k = 7;
//
//	while (left<=right){
//		int mid = (left + right) / 2;
//		//����м�Ԫ�ش�������Ҫ��Ԫ��
//		if (arr[mid] > k) {
//			//���±��ȥ1�����±겻��
//			right = mid - 1;
//		}
//		//����м�Ԫ��С��Ҫ�ҵ�Ԫ��
//		else if (arr[mid] < k) {
//			//���±겻�䣬���±��1
//			left = mid + 1;
//		}
//		else {
//			printf("�ҵ���,�±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//
//}

//#include<string.h>
//#include<Windows.h>  //Sleep(1000);
//#include<stdlib.h>  //system("cls")
//int main() {
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "********************";
//	int left = 0;
//	//��Ϊ�ַ��л�����\0�����Ի���Ҫ�ټ�ȥһ
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;//strlen��ʶ��\0
//	while (left<=right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ����ĺ���  "cls"�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}

//�ж����������Ƿ���ȷ
//#include<stdio.h>
//#include<string.h>
//int main() {
//	int i = 0;
//	char password[20] = {};
//	for (i = 0; i < 3; i++) {
//		printf("����������:");
//		scanf("%s", password);
//		//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		//����������123456����strcmp����0   ���������� "123456"����strcmp���ش���0����   �������С��"123456"���򷵻�С��0����
//		if (strcmp(password ,"123456")==0) {
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else {
//			printf("��¼ʧ��");
//		}
//	}
//	if (i== 3) {
//		printf("���������������,�˳�����\n");
//	}
//}


////��������������˳�����
//#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//a�д����c��С
//	if (a < b) {
//		//�����м�ֵ�����ֵ
//		int tmp = a;
//		a = b;
//		b = tmp;
//}
//	if (a < c) {
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c) {
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}


////���3�ı���
//#include<stdio.h>
//int main() {
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//	}
//	}
//	return 0;
//}


////���Լ��
//#include<stdio.h>
//int main() {
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n!=0) {
//		r = m%n;
//		//��18��ֵ��m
//		m = n;
//		//��6��ֵ��n
//		n = r;
//	}
//	printf("���������:%d", n);
//	return 0;
//}


////��ӡ����
//int main() {
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++) {
//		//�ж�����   1.�ܱ�4�������Ҳ��ܱ�100����
//		//2.�ܱ�400����������
//		if (year % 4 == 0 && year % 100 != 0) {
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0) {
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n count=%d\n", count);
//	return 0;
//}

//��ӡ����
#include<stdio.h>
//int main() {
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		//�ж�i�Ƿ�Ϊ���� ֻ�ܱ�1�ͱ�������
//				//�����жϹ���
//				//1.�Գ���
//				//����2-��i-1
//		int j = 0;
//		for (j = 2; j < i; j++) {
//			//��������
//			if (i % j == 0) {
//
//				break;
//			}
//		}
//		//1,2
//		if (j == i) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


//��ӡ����������
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int count = 0;
//	int i = 0;
//	//ż����������
//	for (i = 100; i <= 200; i++) {
//		//�ж�i�Ƿ�Ϊ���� ֻ�ܱ�1�ͱ�������
//				//�����жϹ���
//				//1.�Գ���
//				//����2-��i-1
//		//sqrtΪ��ƽ������ѧ�⺯��
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++) {
//			//��������
//			if (i % j == 0) {
//
//				break;
//			}
//		}
//		//������
//		if (j>sqrt(i)) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


////��д����1-100�ڳ��ֶ���9
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++) {
//		//�жϸ�λ��9
//		if (i % 10 == 9) {
//			count++;
//		}
//		//�ж�ʮλ��9
//		if (i / 10 == 9) {
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


//int main() {
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++) {
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//
//}

////������ֵ
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];  //���ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//
//}

//99�˷���
//int main() {
//	int i, j = 0;
//	//��ӡ9��
//	for (i = 1; i <= 9; i++) {
//		//��ӡһ��
//		for (j = 1; j <= i; j++) {
//			//����� %-2d  �Ҷ��� %2d
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

