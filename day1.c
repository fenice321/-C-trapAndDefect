#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <malloc.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//<<C������ȱ��>>��һ��
int main()
{
	char ch[] = { 'A' };
	char pCh[] = "A";
	//printf("%d\n", strlen(ch));//���ֵ
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
//				//Ϊ�˶�����λ��,������������ǰ�油0�ı����Լ���ԭ����ֵ(��ʮ���Ʊ�Ϊ�˽�������)
//	//int arr[] = { 112, 324, 435, 015, 034, 056 };
//	//int arr[] = { 112, 324, 435, 017, 042, 070 };//��ת��Ϊ�˽��ƿ��Եõ���ȷ������
//	//int a = 0b1010101010;//���ֱ�����������0��1ǰ��0b�����Ƕ�����,vs2019����,VC6.0����
//	//printf("%d\n", a);
//	//int a = 1010101010;//ע�ⲻҪ��int a = 1010101010;�е�1010101010���Ϊ��������,��һǰ��û�м�0b,�����������ʮ��������
//	//�����ָ��,�Ҳ�0x001efddc���ʾ���ʮ��������,��Ҫ����Ϊ��ָ��
//	//int* p = 0x001efddc;
//	//�����Ȼ��ָ��,�Ҳ�0x001efddcǿ������ת����int*��ָ��,���Ը�ֵ
//	//int* p = (int*)0x001efddc;
//	//int a = 01234586;//0��ͷ����˽�������,���ܳ���8���ϵ�����,���򱨴�
//	//myMax(1.0, 2.0);//��������������,������Ĭ����double��,��Ҫ��float�����f����ֵ֮��
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int x = 100;
//	//int v = x/*p;// /*�����γɴʷ�����,C����ע�;�������
//	int v = x / *p;//���ո����/*���ú�C���ע�ͻ������������ж�
//	printf("v = %d\n", v);
//	v = x / (*p);//�Լ�Ҫʲô�Լ����,����ϧʹ������,���ִʷ�����ͺ����ױ���
//	printf("v = %d\n", v);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//̰�ķ�/���취����
//	int a = 1;
//	int b = 1;
//
//	//int v = a++++ + b;//�ʷ����������Ͳ���
//	//int v = (a++) + (++b);
//	//printf("v = %d\n", v);//v = 3
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//��·��ֵ����:�߼�����&& �� ||������
//	//int a = 10;
//	//int b = 1;
//	//int v = a && b++;
//	////printf("v = %d\n", v);//v = 1
//	////printf("b = %d\n", b);//b = 2
//	////a = 0;
//	////v = a && b++;
//	////printf("v = %d\n", v);//v = 0;
//	////printf("b = %d\n", b);//b = 2/1 ���Կ���Ӧ����1
//
//	//a = 0;
//	//v = a && ++b;
//	//printf("v = %d\n", v);//v = 0
//	//printf("b = %d\n", b);//b = 1/2 vs2019�н����2,GCC�н����1,������1 
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
//	if (NULL == pi)//�����ж�ʱ����д��߱���д�ұ߿�����Ч����(==/=)�Ĵ���ʹ��
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
//	//if (p = NULL)//��==����Ϊ=�����ڴ�й©Ҳ�����ڴ�ʹ�ô���
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
//		if (x = y)//== �� = ֮�����������
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
//	//�ʷ�������
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