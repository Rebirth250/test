#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main() {
//	int x, i, j, k;
//	printf("请输入金字塔层数:\n");
//	scanf("%d", &x);
//	printf("输出的金字塔:\n");
//	for (i = 1; i <= x; i++) {
//		for (j = 1; j <= x - i; j++)
//			printf(" ");
//		for (k = 1; k <= i * 2 - 1; k++)
//			printf("*");
//		printf("\n");
//
//	}
//}

int main() {
    int year = 0;
    int month = 0;
    int day = 0;
    scanf("%4d%2d%2d", &year, &month, &day);
    printf("year=%4d\n", year);
    printf("month=%02d\n", month);
    printf("date=%02d\n", day);
    return 0;
}