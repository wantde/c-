#include<stdio.h>


int main()

{

	int i, j, k,m = 0;
	for (i = 1; i <= 9; i++)
	{
		k = 2 * i - 1;
		for (m = 1; m <= 9 - i; m++)
		{
			printf("  ");
		}
		
		for (j=1;j<=k;j++)
		{
			printf("%d ", i);
			
		}
		printf("\n");
	}
	i = 8; j = 0; k = 0; m = 0;
	for (i = 8; i >= 1; i--)
	{
		k = 2 * i - 1;
		for (m = 1; m <= 9 - i; m++)
		{
			printf("  ");
		}

		for (j = 1; j <= k; j++)
		{
			printf("%d ", i);

		}
		printf("\n");
	}

	return 0;
}