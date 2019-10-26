#include <stdio.h>

int main()
{
	int num, num1,i,j;
	scanf("%d%d", &num, &num1);
	for (i = 0; i < num; i ++)
	{
		for (j = 0; j <= i; j++ )
			printf("%d",num1);
		printf("\n");
	}
	return 0;
}
