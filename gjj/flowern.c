#include <stdio.h>

int calc(int n, int m);
int main()
{
	int num, i, n=1;
	scanf("%d", &num);
	for (i = 0; i < num; ++i)
		n*=10;
	for (i = 100; i < n; ++i)
	{
		if (calc(i,num) == 1)
			printf("%d\n", i);
	}
	return 0;
}
/*
 * True return 1,false retuen 0
 */
int calc(int n, int m)
{
	int num = 0,tmp = 1, src = n, i;
	for (;n > 0; n/=10)
	{
		tmp = 1;
		for (i = 0; i < m; ++i)
			tmp *= n%10;
		num += tmp;
	}
	if (num == src)
		return 1;
	else
		return 0;
}
