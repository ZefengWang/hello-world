#include <stdio.h>
#include <stdlib.h>

int arraycmp(const void * n1, const void * n2)
{

	return *(int *)n2 - *(int *)n1;
}

int main()
{
	int n, c[3],i;
	scanf("%d", &n);
	if (n < 100 || n > 999)
	{		
		printf("error in range\n");
		return -1;
	}
	for (i = 0; i < 3; n/=10,i++)
	{
		c[i] = n%10;
	}
	qsort(c,3,sizeof(int),arraycmp);
	i = c[0]*100 + c[1] *10 + c[2];
	printf("%d \n", i);
	return 0;
}

