#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
////��������Ϸ
//#include<string.h>
//#include<stdlib.h>
//#include<time.h>
//void game() {
//	int guess = 0;
//	int ret = 0;
//	//���������(1-100)
//	ret = rand()%100+1;
//	while (1) {
//		printf("������\n");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("�´���\n");
//		}
//		else if (guess < ret) {
//			printf("��С��\n");
//		}
//		else {
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//
//
//void menu() {
//	printf("**********************");
//	printf("\n");
//	printf("1.����Ϸ ");
//	printf("2.�˳�");
//	printf("\n");
//}
//
//int main() {
//	int input=0;
//	//ʱ����������������������ʼ��
//	//����������ɵ����̶ֹ� srand(1);
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("��ѡ��:");
//			scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//go to ���
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
//�ػ����� 
//int main() {
//	char input[20] = { 0 };
//	//shutdown -s -t 60 �ػ�
//	//shutdown -a ȡ���ػ�
//	//system()ִ��ϵͳ����
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע����Խ���1���Ӻ�ػ�����������˧���ȡ���ػ�\n:");
//	//�Ƚ������ַ���
//	scanf("%s", input);
//	if (strcmp(input, "����˧��") == 0) {
//		system("shutdown -a");
//		printf("��ȡ���ػ�");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}



int main() {
	char input[20] = { 0 };
	//shutdown -s -t 60 �ػ�
	//shutdown -a ȡ���ػ�
	//system()ִ��ϵͳ����
	system("shutdown -s -t 60");
	while (1) {
		printf("��ע����Խ���1���Ӻ�ػ�����������˧���ȡ���ػ�\n:");
		//�Ƚ������ַ���
		scanf("%s", input);
		if (strcmp(input, "����˧��") == 0) {
			system("shutdown -a");
			printf("��ȡ���ػ�");
			break;
		}
	}
	return 0;
}