#include <stdio.h>


int main() {

	printf("%d", 5 < 10 && 0);
	printf("%d", 5 < 10 || 0);
	printf("%d", 5 > (10 && 0));
	printf("%d", 5 > (10 || 0));
	return 0;
}