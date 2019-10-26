#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	long long int n,res = 0;;
	if (argc != 2)
	{
		printf("usage:\t%s [num]\n", argv[0]);return 0;
	}
	n = atoll(argv[1]);
	printf("%lld\t%lld\n",res, n);
	printf("________________\n|output\t|input\t|\n|_______|_______|\n");
	for (; n > 0LL;n/=10)
	{
		res *= 10;
		res += n % 10;
		printf("%lld\t|%lld\n",res, n);
	}
	
//	printf("%lld\n",res);
	
	return 0;
}
