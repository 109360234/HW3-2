#include<stdlib.h>
#include<stdio.h>
int LCM(int a1,int b2);
int main(void)
{
	int a, b;
	printf("�п�J�ƭ�:");
	scanf_s("%d%d", &a, &b);
	printf("%d", LCM(a,b));
	system("pause");
	return 0;
}
int LCM(int a, int b)
{
	int max,count=1,temp,i;
	if (a > b)
		max = a;
	else 
		max = b;
	count = max;
	while (1)
	{
		if ((count % a == 0) && (count % b == 0))
		{
			//temp = count;
			break;
		}
		else
		{			
			count++;
		}	
	}
	return count;
}