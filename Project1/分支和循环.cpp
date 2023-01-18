#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//悬空else  else离它最近的未匹配的if进行匹配
//int main() {
//	int a = 0;
//	int b = 2;
//	//只有a等于1的时候才会进入判断
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

//else 代码块
//int main() {
//	int age = 10;
//	if (age > 10)
//		printf("人");
//	else
//	{
//		if (age < 10)
//			printf("");
//	}
//
//
//}


//输入一个数判断奇偶性 方法一
//int main() {
//	int num1;
//	int num = scanf("%d",&num1);
//	if (num1% 2 == 0)
//		printf("这个数是偶数");
//	else
//		printf("这个数是奇数");
//	return 0;
//}


//方法二
//int main() {
//	int num1;
//	int num = scanf("%d", &num1);
//	int num3 = num1 % 2 == 0;
//	num3 ? printf("偶数") : printf("奇数");
//		return 0;
//}



//输出1-100内的奇数 方法一
//int main() {
//	for (int i = 0; i < 100; i++) {
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//}

//方法二
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
////switch练习
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
//	int ch = getchar(); //获取输入的值
//	putchar(ch);  //输出获取的输入的值
//	return 0;
//}


////模拟确认密码
//#include<string.h>
//int main() {
//	int ch = 0;
//	int ret = 0;
//	char password[20] = {0};
//	printf("请输入密码:");
//	scanf("%s", password);
//	//如果没有读到\n的话将会一直获取输入
//	while ((ch = getchar()) != '\n') {
//
//	}
//	printf("请确认y/n:");
//	ret = getchar();
//	if (ret=='y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("放弃确认");
//	}
//	return 0;
//}


//获取数字字符
//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//do while 循环
//int main() {
//	int i = 1;
//	do {
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	//当满足条件时会返回到do中，不满足条件则结束程序
//	while (i <=10);
//	return 0;
//
//}

//计算n的阶乘
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




//计算3的阶乘
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


//优化 3的阶乘
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
//	//写一个代码，在数组中找到7
//	int i = 0;
//	//数组分配的空间  / 每个数字所占的空间=数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("找到了，下标是：%d\n",i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
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
//			printf("猜大了\n");
//			break;
//		}
//		if (num2< 150) {
//			printf("猜小了\n");
//			break;
//		}
//		if (num2== 150) {
//			printf("猜对了");
//			return 0;
//		}
//	}
//	
//}


////二分查找
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1; //右下标
//	int left = 0;//左下标
//	int k = 7;
//
//	while (left<=right){
//		int mid = (left + right) / 2;
//		//如果中间元素大于我们要的元素
//		if (arr[mid] > k) {
//			//左下标减去1，右下标不变
//			right = mid - 1;
//		}
//		//如果中间元素小于要找的元素
//		else if (arr[mid] < k) {
//			//左下标不变，右下标加1
//			left = mid + 1;
//		}
//		else {
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
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
//	//因为字符中还带有\0，所以还需要再减去一
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;//strlen会识别\0
//	while (left<=right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的函数  "cls"清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}

//判断密码输入是否正确
//#include<stdio.h>
//#include<string.h>
//int main() {
//	int i = 0;
//	char password[20] = {};
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码:");
//		scanf("%s", password);
//		//==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
//		//如果密码等于123456，则strcmp返回0   如果密码大于 "123456"，则strcmp返回大于0的数   如果密码小于"123456"，则返回小于0的数
//		if (strcmp(password ,"123456")==0) {
//			printf("登录成功\n");
//			break;
//		}
//		else {
//			printf("登录失败");
//		}
//	}
//	if (i== 3) {
//		printf("三次密码输入错误,退出程序\n");
//	}
//}


////输入三个数，按顺序输出
//#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//a中存最大，c最小
//	if (a < b) {
//		//定义中间值存最大值
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


////输出3的倍数
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


////最大公约数
//#include<stdio.h>
//int main() {
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n!=0) {
//		r = m%n;
//		//将18赋值给m
//		m = n;
//		//将6赋值给n
//		n = r;
//	}
//	printf("最大公因数是:%d", n);
//	return 0;
//}


////打印闰年
//int main() {
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++) {
//		//判断闰年   1.能被4整除并且不能被100整除
//		//2.能被400整除是闰年
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

//打印素数
#include<stdio.h>
//int main() {
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		//判断i是否为素数 只能被1和本身整除
//				//素数判断规则
//				//1.试除法
//				//产生2-》i-1
//		int j = 0;
//		for (j = 2; j < i; j++) {
//			//不是素数
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


//打印素数方法二
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int count = 0;
//	int i = 0;
//	//偶数不是素数
//	for (i = 100; i <= 200; i++) {
//		//判断i是否为素数 只能被1和本身整除
//				//素数判断规则
//				//1.试除法
//				//产生2-》i-1
//		//sqrt为开平方的数学库函数
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++) {
//			//不是素数
//			if (i % j == 0) {
//
//				break;
//			}
//		}
//		//是素数
//		if (j>sqrt(i)) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


////编写程序1-100内出现多少9
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++) {
//		//判断个位有9
//		if (i % 10 == 9) {
//			count++;
//		}
//		//判断十位有9
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

////输出最大值
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];  //最大值
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

//99乘法表
//int main() {
//	int i, j = 0;
//	//打印9行
//	for (i = 1; i <= 9; i++) {
//		//打印一行
//		for (j = 1; j <= i; j++) {
//			//左对齐 %-2d  右对齐 %2d
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

