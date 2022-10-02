#include <stdio.h>
#include <cstring>

int main() {
	int x = 14235; //待测数字
	int n = 10; //数字的位数对应的10^
	for (int i = 1;; x / 10) {
		if (x / 10 > 0)
			n *= 10;
		else
			break;
	}
	do {
		n /= 10;
		int d = x / n;
		printf("%d", d);
	} while (n != 1);
	return 0;
}