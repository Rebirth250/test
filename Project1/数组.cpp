#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
//ð������
void bubble_sort(int arr[],int sz) {
	//ȷ��ð�����������
	int i = 0;
	//�����Ƚ�,����-1
	for (i = 0; i < sz - 1; i++) {
		//���Ѿ��źõ�����������н�����ƣ��涨�������˳��Ĳ�������
		int flag = 1; //������һ��Ҫ����������Ѿ�����
		int j = 0;
		//ÿһ��ð������  ÿһ���������������һ
		for (j = 0; j <sz-1-i ; j++) {
			//����������
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; //����ð�����򲢲���ȫ����
			}
		}
		//����
		if (flag == 1) {
			break;
		}
	}
}
int main() {
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}