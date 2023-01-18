#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
////猜数字游戏
//#include<string.h>
//#include<stdlib.h>
//#include<time.h>
//void game() {
//	int guess = 0;
//	int ret = 0;
//	//生成随机数(1-100)
//	ret = rand()%100+1;
//	while (1) {
//		printf("猜数字\n");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("猜大了\n");
//		}
//		else if (guess < ret) {
//			printf("猜小了\n");
//		}
//		else {
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//
//void menu() {
//	printf("**********************");
//	printf("\n");
//	printf("1.玩游戏 ");
//	printf("2.退出");
//	printf("\n");
//}
//
//int main() {
//	int input=0;
//	//时间戳来设置随机数的生成起始点
//	//设置随机生成的数字固定 srand(1);
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("请选择:");
//			scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//go to 语句
#include<stdio.h>
//int main() {
//	printf("hello");
//	goto again;
//	printf("haha");
//again:
//	printf("hh");
//	return 0;
//}

#include<Windows.h>
#include<string.h>
//关机程序 
//int main() {
//	char input[20] = { 0 };
//	//shutdown -s -t 60 关机
//	//shutdown -a 取消关机
//	//system()执行系统命令
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意电脑将在1分钟后关机，输入我是帅哥就取消关机\n:");
//	//比较两个字符串
//	scanf("%s", input);
//	if (strcmp(input, "我是帅哥") == 0) {
//		system("shutdown -a");
//		printf("已取消关机");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}



int main() {
	char input[20] = { 0 };
	//shutdown -s -t 60 关机
	//shutdown -a 取消关机
	//system()执行系统命令
	system("shutdown -s -t 60");
	while (1) {
		printf("请注意电脑将在1分钟后关机，输入我是帅哥就取消关机\n:");
		//比较两个字符串
		scanf("%s", input);
		if (strcmp(input, "我是帅哥") == 0) {
			system("shutdown -a");
			printf("已取消关机");
			break;
		}
	}
	return 0;
}