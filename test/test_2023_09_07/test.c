#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n1, m, i, j, k, min, max, n, q = 0;
	scanf("%d%d", &n1, &m);
	int a[99][99];
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		n = -1;
		for (j = 0; j < n1; j++)
		{
			min = 0;
			if (a[min][i] > a[j][i])
			{
				min = j;
			}
			for (k = 0; k < m; k++)
			{
				max = i;
				if (a[min][max] < a[min][k])
				{
					n = 0;
				}
			}
		}
		if (n == -1)
		{
			printf("Array[%d][%d]=%d\n", min, max, a[min][max]);
			q = 1;
		}
	}
	if (q == 0)
		printf("None");

	return 0;
}