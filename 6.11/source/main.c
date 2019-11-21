#include <stdio.h>	

void main(void)
{
	int data[50];
	int i, j, n, temp;

	printf("輸入數值的個數： "); 	
	scanf_s("%d", &n);
	printf("\n");

	for (i = 1; i <= n; i++)	 
	{
		printf("請輸入數值：");
		printf("data[%d]=", i);
		scanf_s("%d", &data[i]);
	}


	for (i = 1; i <= n; i++)
	{
		for (j = n; j > i; j--)
		{
			if (data[j - 1] > data[j])   
			{
				temp = data[j - 1];
				data[j - 1] = data[j];
				data[j] = temp;
			}
		}
	}
	printf("\n資料排序後為\n");
	for (i = 1; i <= n; i++)
	{
		printf("%d ", data[i]);
	}
	system("pause");
}