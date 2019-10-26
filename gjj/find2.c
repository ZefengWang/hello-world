#include <stdio.h>

int has_2(int a);
int main()
{
	int i, res = 0, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		res += has_2(i);
	}
	printf("%d\n", res);
	return 0;
}

int has_2(int a)
{
	int res = 0;
	while (a != 0)
	{
		if (a%10 == 2)
			res ++;
		a/=10;
	}
	return res;
}
