#include<stdio.h>
#include<math.h>
int prime(int x) 
{
	int i;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0)
			break;
	}
	if (i > sqrt(x))
		return 1;
	else
		return 0;
}
int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 3; i < n; i++)
	{
		if (prime(i) == 1 && i % 2 == 1 && prime(n - i) == 1 && (n - i) % 2 == 1)
		{
			printf("%d=%d+%d\n", n, i, n - i);
			break;
		}
	}
	return 0;
}
