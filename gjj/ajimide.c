#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d",&a, &b);
	printf("the number of %d, %d is %d\n",a,b,a>b?a/b+1:b/a+1);
	return 0;
}
