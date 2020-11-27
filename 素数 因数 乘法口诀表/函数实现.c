#define _CRT_SECURE_NO_WARNINGS 1
#include"实现.h"

menu()
{
	printf("*******1,分解因数**************\n");
	printf("*******2，求两个数最大公约数****\n");
	printf("*******3，打印口诀表************\n");
	printf("*******4，退出**************\n");
}

 table()
{
	 int i = 0;
	 int j = 0;
	int k = 0;
	for (i = 1; i <= 9; i++)
	{
		j = 0;
		for (j = 1; j <= i; j++)
		{
			k = i * j;
			printf("%d = %d * %d   ",k,i,j);
			k = 0;
		}
		printf("\n");
	}
	
}
 void chose(int input)
 {
	 do
	 {
		 switch (input)
		 {
		 case 1:
			 resolve();

			 break;
		 case 2:
			 common();
			 break;
		 case 3:

			 table();
			 break;
		 default:
			 break;
		 }

	 } while (input!=3);
	 

	 
 }
 resolve()
 {
	 int a = 0;
	 int j = 0;
	 int i = 0;
	 int k = 0;
	 printf("你要求谁的因素?");
	 scanf("%d", &k);
	 a = k;
	 for (i = 2; i <= k; i++)
	 {
		 if (k % i == 0)
		 {
			 printf("因素是%d\n", i);
			 j++;
			 
			 k = k / i;

			 i = 2;
		
		 }
	 
	 }
	 if (j == 1)
	 {
		 printf("****%d是质素****", a);
	 }
		 
	 
	 
	

	 

	 
 }
 common()
 {
	 int a = 0;
	 int n = 0;
	 int m = 0;
	 int i = 0;
	 int j = 0; 
	 printf("请输入被求数\n");
	 scanf("%d %d", &i, &j);
	 for (; i % 2 == 0&&j%2==0;)
	 {
		 i = i/2;
		 j = j / 2;
		 m++;
	 }
	 if (j > i)
	 {
		 a = i;
		 i = j;
		 j = a;
	 }
	 a = 0;
	 int b = 0;
	 for (;;)
	 {
		 b = i - j;
		 
		
		 if (j == b)
		 {
			 break;
		 }
		 if (b > j)
		 {
			 a = j;
			 j = b;
			 b = a;
		 }
		 i = j;
		 j = b;

     }
	 if (m > 0)
	 {
		 n = 2 * m * b;
		 printf("最大公约数是%d", n);
      }
	 else
		 printf("最大公约数是%d", j);
 }
 //int max(int i, int j)
 //{
	// if (i > j)
	//	 return i;
	// if (j > i)
	//	 return j;
 //}
 //int min(int i, int j)
 //{
	// if (i < j)
	//	 return i;
	// if (j < i)
	//	 return j;
 //}