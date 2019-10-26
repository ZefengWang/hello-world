#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if (n > 100 || n < 0)
		printf("Score is error!\n");
	else if (n < 60)
		printf("E\n");
	else if (n < 70)
		printf("D\n");
	else if (n < 80)
		printf("C\n");
	else if (n < 90)
		printf("B\n");
	else if (n <= 100)
		printf("A\n");

	return 0;
}
