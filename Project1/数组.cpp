#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
//冒泡排序
void bubble_sort(int arr[],int sz) {
	//确定冒泡排序的趟数
	int i = 0;
	//两两比较,所以-1
	for (i = 0; i < sz - 1; i++) {
		//将已经排好的且有序的数列进行设计，规定排序后有顺序的不再排序
		int flag = 1; //假设这一趟要排序的数据已经有序
		int j = 0;
		//每一套冒泡排序  每一套排序完后，套数少一
		for (j = 0; j <sz-1-i ; j++) {
			//数大的往后放
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; //本套冒泡排序并不完全有序
			}
		}
		//有序
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