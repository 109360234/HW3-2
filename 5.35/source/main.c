#include<stdio.h>
#include<stdlib.h>
unsigned long fibonacci();
int main(void)
{
	int i,n;
	printf("請輸入費氏數列項數\n");
	scanf_s("%d", &n);
	printf("%d ", fibonacci(n-1));
	system("pause");
	return 0;
}
unsigned long fibonacci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}