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

//交换奇偶位：交换一个整数的二进制的奇偶位置
//void swap(int num)
//{
//	int i = 0;
//	int ou = 0; 
//	int ji = 0; 
//	for (i = 0; i < 32; i++)
//	{
//		ou |= (num & (1 << (2 * i))) << i; //将偶数位左移i位后与ou进行或运算
//		ji |= (num & (1 << (2 * i + 1))) >> i; //将奇数位右移i位后与ji进行或运算
//	}
//	num = ou | ji; 
//	//或运算：将两个二进制数合并成一个二进制数
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
//	int ou = 0; //用一个整数存储偶数位
//	int ji = 0; //用一个整数存储奇数位
//
//	////方法二 
//	ou = num & 0xAAAAAAAA;//掩码：获取所有偶数位
//	ji = num & 0x55555555;
//	ou >>= 1;//右移偶数位，左移奇数位
//	ji <<= 1;
//
//	////方法一
//	//int i = 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	ou |= (num & (1 << (2 * i))) << 1; //将偶数位左移一位后与ou进行或运算
//	//	ji |= (num & (1 << (2 * i + 1))) >> 1; //将奇数位右移一位后与ji进行或运算
//	//}
//	num = ou | ji; //将偶数位和奇数位进行或运算，得到交换后的结果
//	printf("%d\n", num); 
//}
//int main()
//{
//	int num = 5;
//	swap(num);
//	return 0;
//}

////写一个宏，计算结构体中某变量对于首地址的偏移，并给出说明
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


