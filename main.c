#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	long num = 0;
//	FILE* pf = 0;
//	if (pf = fopen("M:\\fname.dat", "r") == NULL)
//	{
//		printf("can not open the file!\n");
//		exit(0);
//	}
//	while (fgetc(pf) != EOF)
//	{
//		num++;
//	}
//	printf("num=%d\n", num);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//������żλ������һ�������Ķ����Ƶ���żλ��
//void swap(int num)
//{
//	int i = 0;
//	int ou = 0; 
//	int ji = 0; 
//	for (i = 0; i < 32; i++)
//	{
//		ou |= (num & (1 << (2 * i))) << i; //��ż��λ����iλ����ou���л�����
//		ji |= (num & (1 << (2 * i + 1))) >> i; //������λ����iλ����ji���л�����
//	}
//	num = ou | ji; 
//	//�����㣺���������������ϲ���һ����������
//	printf("%d\n", num); 
//}
//int main()
//{
//	int num = 17;
//	swap(num);
//	return 0;
//}

//void swap(int num)
//{
//	int ou = 0; //��һ�������洢ż��λ
//	int ji = 0; //��һ�������洢����λ
//
//	////������ 
//	ou = num & 0xAAAAAAAA;//���룺��ȡ����ż��λ
//	ji = num & 0x55555555;
//	ou >>= 1;//����ż��λ����������λ
//	ji <<= 1;
//
//	////����һ
//	//int i = 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	ou |= (num & (1 << (2 * i))) << 1; //��ż��λ����һλ����ou���л�����
//	//	ji |= (num & (1 << (2 * i + 1))) >> 1; //������λ����һλ����ji���л�����
//	//}
//	num = ou | ji; //��ż��λ������λ���л����㣬�õ�������Ľ��
//	printf("%d\n", num); 
//}
//int main()
//{
//	int num = 5;
//	swap(num);
//	return 0;
//}

////дһ���꣬����ṹ����ĳ���������׵�ַ��ƫ�ƣ�������˵��
//#define MY_OFFSRTOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//typedef struct MyStruct
//{
//	int a;
//	short b;
//	char c;
//	int d;
//}s;
//int main()
//{
//	printf("%d\n", MY_OFFSRTOF(s, a));
//	printf("%d\n", MY_OFFSRTOF(s, b));
//	printf("%d\n", MY_OFFSRTOF(s, c));
//	printf("%d\n", MY_OFFSRTOF(s, d));
//	return 0;
//}


