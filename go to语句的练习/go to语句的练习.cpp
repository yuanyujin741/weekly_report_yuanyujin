#include<stdio.h>

int main()
{
	int iStep;
	int iSelect;
	for (iStep = 1; iStep <= 9; iStep++)//每次输入99的时候跳出循环，进入for循环。每次增加一个步数，每次都进行输出//
	{
		printf("这是第%d步", iStep);
		do
		{
			puts("请输入一个数字，0是结束，99是下一步");
			scanf_s("%d", &iSelect);
			if (iSelect == 0)
				goto exit;
		} while (iSelect != 99);			//这里说明跳出do while循环的条件是 select等于99。//
	}
exit:
	return 0;			//在最后的时候，声明exit//
}