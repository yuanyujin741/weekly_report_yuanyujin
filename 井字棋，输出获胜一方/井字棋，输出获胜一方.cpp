#include<stdio.h>

int main()
{
	const int size = 3;
	int a1, a2;//a是一方,1
	int b1, b2;//b是另一方,2
	int i, j;
	int arr[size][size];
	int check = -1;//-1和棋,1a,2b
				   //使用check的主要的目的是进行最后的结果的输出，减少不必要的运算，同事减少出口个数

	//井字棋的输入
	a1 = a2 = b1 = b2 = 0;
	printf("游戏的规则如下\n1表示a，2表示b，请从井字棋的左上角开始按行输入\n");
	for (i=0; i < size; i++)
	{
		for (j=0; j < size; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}

	//进行行与列方向上的检查
	//采用一个循环嵌套，完成了两个方向上的检查
	for (i=0; i < size; i++)
	{
		for (j=0; j < size; j++)
		{
			if (arr[i][j] == 1)
				a1++;
			else
				b1++;				//这是其中的一个方向
			if (arr[j][i] == 1)
				a2++;
			else
				b2++;				//这是另外的一个方向
		}
		
	}
	if (a1 == size||a2==size)
	{
		check = 1;
	}
	else if (b1 == size || b2 == size)
	{
		check = 2;
	}

	//检查对角线
	a1 = a2 = b1 = b2 = 0;
	for (i=0; i < size; i++)//关注i的初始化
	{
		
		if (arr[i][i] == 1)
			a1++;
		else
			b1++;
		if (arr[i][2 - i] == 1)
			a2++;
		else
			b2++;
	}
	if (a1 == size || a2 == size)
		check = 1;
	if (b1 == size || b2 == size)
		check = 2;

	//进行输出
	//注意Switch的break的使用
	switch (check)
	{
	case 1:
		printf("a胜利了");
		break;
	case 2:
		printf("b胜利了");
		break;
	case -1:
		printf("平局");
		break;
	default:
		break;
	}
	return 0;
}