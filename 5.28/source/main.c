#include<stdio.h>
#include<stdlib.h>
char re(char input);
int main(void)
{
	char a;
	printf("½Ð¿é¤J¦r¥À\n");
	scanf_s("%c",&a);
	printf("%c",re(a));
	system("pause");
	return 0;
}
char re(char input)
{
	int ascii;
	ascii = (int)input;
	if (ascii >= 65 && ascii < 91)
	{
		ascii = ascii + 32;
	}
	else
	{
		ascii = ascii - 32;
	}
	return (char)ascii;
}