#include<stdio.h>
#include<stdlib.h>//malloc的使用所必须的
//计算可分配的空间
int main()
{
	int* p;
	int number;
	int count=0;
	p=(int *)malloc(number * sizeof(int));
	//1.强制转换void*为int* 2.关注可以把p指针当做一个数组名使用
	while ((p = (int*)malloc(100 * 1024 * 1024)))
		/*
		关注赋值运算符本身有一个返回值
		*/
	{
		count++;
	}
	//printf("可分配%d00M的内存空间", count);
	free p;
	return 0;
}