#include<stdio.h>

int ShuChu(int i)
{
	switch (i)
	{
	case 1:
		printf("yi");
		break;
	case 2:
		printf("er");
		break;
	case 3:
		printf("san");
		break;
	case 4:
		printf("si");
		break;
	case 5:
		printf("wu");
		break;
	case 6:
		printf("liu");
		break;
	case 7:
		printf("qi");
		break;
	case 8:
		printf("ba");
		break;
	case 9:
		printf("jiu");
		break;
	case 0:
		printf("ling");
		break;
	}
	printf(" ");
	return 0;
}
int main()
{
	int a;// = 1234560
	printf("请输入一个整数");
	scanf_s("%d", &a);
	if (a < 0)
	{
		a = -a;
		printf("fu ");
	}
	int x = a;
	int n=1;//n是a的tong gao wei de一个数
	//x=12,n=10
	for (n = 1;x>0;)		//
	{
		x /= 10;
		n*=10;
	}
	n /= 10;
/////////////////////////////////////////////////////////////////////////////
	x = a;
//////////////////////////////////////////////////////////////////////////////
	//10,10,m=1,x=0,n=1,x
	for (int m=1;n>0;n/=10)  //m是要输出的数
	{
		m = x / n;
		x %= n;
		ShuChu(m);
	}
	return main();
}