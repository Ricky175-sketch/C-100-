#define _CRT_SECURE_NO_WARNINGS 1
/*
��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�

��������������ڰ�λ��ʮλ����λ�����ֶ���1��2��3��4��������е����к���ȥ �����������������С�*/
#include<stdio.h>
#include<Windows.h>
int main()
{
	int i, j, k = 0;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (i != j&&j != k&&k != i)
				{
					printf("%d%d%d,", i, j, k);
				}
			}
		}
	}
	system("pause");
	return 0;
}