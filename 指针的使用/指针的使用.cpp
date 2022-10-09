#include<stdio.h>

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,-1, };
	int* p = arr;
	while (*p != -1)
	{
		printf("%3d", *p++);//进去的时候分别指向0-9，但是在*之前先进性了++操作（因为++的优先级更高)
	}
	return 0;
}