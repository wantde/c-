#include"function.h"
#define  _CRT_SECURE_NO_WARNINGS	
meau()
{
	printf("*****1.����3������ʽ**********\n");
	printf("*****2.�ж�������������ʽ**********\n");
	printf("*****3.��������**********\n");
	printf("*****4.�������**********\n");
	printf("*****5.�˳�**********\n");

}
void chose(int input)
{
	do {
		switch (input)
		{
		case 1:
			
			break;
		case 2:
			decide();
			break;

		}
	} while (input);
}


decide()
{
	int mum = 0;
	int n = 0;
	int i = 0;
	int j = 0;
	printf("��Ҫ�󼸽�����ʽ��1��10\n");
	scanf_s("%d", &n);
	int a[2][2] = { 0 };
	for (i = 1; i -1<= n; i++)
	{
		j = 1;
		for (j = 1; j-1 <= n; j++)
		{
			int m = 0;
			printf("��%d�е�%d�е�ֵ", i, j);
			scanf_s("%d", &m);
			a[i][j] = m;
		}
	}
	for (i = 0; i  <= n-1; i++)
	{
		j = 0;
		for (j = 0; j  <= i; j++)
		{
			if (a[i][j] == 0)
			{
				mum++;
			}
		}
	}
	
	if (mum == (n - 1) + (n - 1) * (n - 2))
	{
		printf("yes");
	}



}
