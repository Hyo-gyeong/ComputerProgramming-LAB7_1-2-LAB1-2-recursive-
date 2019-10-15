#include <stdio.h>

int sum (int k, int n)
{
	if (n > 1){ 
		printf("%d ", 10 * k + 2);
		return 10 * k + 2 + sum(k+1, n-1);
	}
	else {
		printf("%d ", 10 * k + 2);
		return 10 * k + 2;
	}
}
int main(void)
{
	int input;
	int i = 1;

	scanf("%d", &input);
	printf("\n%d\n", sum(i,input));
}