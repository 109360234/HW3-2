#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float re(float a, float b);
int main(void)
{
	float base, exponent;
	printf("�п�J�Ʀr�P���趵");
	scanf_s("%f%f", &base,&exponent);
	printf("\nanswer is %.2f", re(base, exponent));
	system("pause");
	return 0;
}
float re(float a, float b)
{
	float ans;
	ans = pow(a, b);
	return ans;
}