#include <stdio.h>

int calc(int n);
int main()
{
	int num;
	scanf("%d", &num);
	if (calc(num) == 1)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}
/*
 * True return 1,false retuen 0
 */
int calc(int n)
{
	int num = 0,tmp = 0, src = n;
	for (;n > 0; n/=10)
	{
		tmp = n%10;
		num += tmp * tmp * tmp;
	}
	if (num == src)
		return 1;
	else
		return 0;
}
