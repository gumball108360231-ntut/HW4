#include <stdio.h>	

void main(void)
{
	int data[50];
	int i, j, n, temp;

	printf("��J�ƭȪ��ӼơG "); 	
	scanf_s("%d", &n);
	printf("\n");

	for (i = 1; i <= n; i++)	 
	{
		printf("�п�J�ƭȡG");
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
	printf("\n��ƱƧǫᬰ\n");
	for (i = 1; i <= n; i++)
	{
		printf("%d ", data[i]);
	}
	system("pause");
}