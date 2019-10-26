#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long int n,res = 0;;
	scanf("%lld",&n);
	for (; n > 0LL;n/=10)
	{
		res *= 10;
		res += n % 10;
	}
	printf("%lld\n",res);
	return 0;
}
