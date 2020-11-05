#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <malloc.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//<<C陷阱与缺陷>>第一天
int main()
{
	char ch[] = { 'A' };
	char pCh[] = "A";
	//printf("%d\n", strlen(ch));//随机值
	printf("%d\n", strlen(pCh));
	printf("%d\n",  sizeof(ch));
	printf("%d\n", sizeof(pCh));
	system("pause");
	return 0;
}
//int myMax(int a, int b)
//{
//	return a > b ? a : b;
//}
//float myMax(float a, float b)
//{
//	return a > b ? a : b;
//}
//double myMax(double a, double b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//				//为了对齐三位数,倒数三个数在前面补0改变了自己的原来的值(由十进制变为八进制数据)
//	//int arr[] = { 112, 324, 435, 015, 034, 056 };
//	//int arr[] = { 112, 324, 435, 017, 042, 070 };//先转换为八进制可以得到正确的数据
//	//int a = 0b1010101010;//部分编译器可以在0和1前加0b代表是二进制,vs2019可以,VC6.0不行
//	//printf("%d\n", a);
//	//int a = 1010101010;//注意不要把int a = 1010101010;中的1010101010理解为二进制了,其一前面没有加0b,其二就是整型十进制数据
//	//左侧是指针,右侧0x001efddc本质就是十六进制数,不要误以为是指针
//	//int* p = 0x001efddc;
//	//左侧依然是指针,右侧0x001efddc强制类型转化成int*型指针,可以赋值
//	//int* p = (int*)0x001efddc;
//	//int a = 01234586;//0开头代表八进制序列,不能出现8以上的数字,否则报错
//	//myMax(1.0, 2.0);//浮点数传参陷阱,浮点数默认是double型,若要传float型请加f在数值之后
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int x = 100;
//	//int v = x/*p;// /*连用形成词法陷阱,C风格的注释就是这样
//	int v = x / *p;//按空格避免/*连用和C风格注释混淆编译器的判断
//	printf("v = %d\n", v);
//	v = x / (*p);//自己要什么自己清楚,不吝惜使用括号,该种词法陷阱就很容易避免
//	printf("v = %d\n", v);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//贪心法/大嘴法陷阱
//	int a = 1;
//	int b = 1;
//
//	//int v = a++++ + b;//词法分析器解释不了
//	//int v = (a++) + (++b);
//	//printf("v = %d\n", v);//v = 3
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//短路求值陷阱:逻辑运算&& 和 ||常出现
//	//int a = 10;
//	//int b = 1;
//	//int v = a && b++;
//	////printf("v = %d\n", v);//v = 1
//	////printf("b = %d\n", b);//b = 2
//	////a = 0;
//	////v = a && b++;
//	////printf("v = %d\n", v);//v = 0;
//	////printf("b = %d\n", b);//b = 2/1 考试考到应该填1
//
//	//a = 0;
//	//v = a && ++b;
//	//printf("v = %d\n", v);//v = 0
//	//printf("b = %d\n", b);//b = 1/2 vs2019中结果是2,GCC中结果是1,考试填1 
//
//	int a = 10;
//	int b = 1;
//	//int v = a || b++;
//	//printf("v = %d\n", v);//v = 1
//	//printf("b = %d\n", b);//b = 1
//	a = 0;
//	int v = a || b++;
//	printf("v = %d\n", v);//v = 1
//	printf("b = %d\n", b);//b = 2
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 4;
//	int v = a & b;
//	printf("v = %d\n", v);//0
//	v = a && b;
//	printf("v = %d\n", v);//1
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int* pi = (int*)malloc(sizeof(int));
//	if (NULL == pi)//条件判断时常量写左边变量写右边可以有效减少(==/=)的错误使用
//	{
//		printf("pi malloc error!\n");
//		exit(-1);
//	}
//	*pi = 100;
//	printf("*pi = %d\n", *pi);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(sizeof(int));
//	//if (p = NULL)//将==误用为=导致内存泄漏也引发内存使用错误
//	if (p == NULL)
//	{
//		printf("p malloc error!\n");
//		exit(-1);
//	}
//	*p = 10;
//	printf("*p = %d\n", *p);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int x = 1;
//	int y = 0;
//	while (1)
//	{
//		//if (x == y)
//		if (x = y)//== 与 = 之间容易误出错
//		{
//			break;
//		}
//		printf("x = %d\n", x);
//		x++;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//词法分析器
//	int x = 10;
//	int big = 5;
//	printf("x = %d\n", x);
//	//if (x > big)
//	//{
//	//	x = big;
//	//}
//	if
//		(
//			x
//			>
//			big
//		)
//	{
//		x
//		=
//		big
//		;
//	}
//	printf("x = %d\n", x);
//	system("pause");
//	return 0;
//}