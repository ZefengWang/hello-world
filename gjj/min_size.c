#include <stdio.h>

void swap(int *a, int *b);
int main()
{
	int w1,h1,w2,h2,max,min;
	scanf("%d%d%d%d", &w1, &h1, &w2, &h2);
	if (w1 < h1)
		swap(&w1,&h1);
	if (w2 < h2)
		swap(&w2,&h2);
	if (w1 < w2)
	{
		swap(&w1,&w2);
		swap(&h1,&h2);
	}
	max = w1;
	if (h1 > w2)
		min = h1;
	else if (h1 < h2)
		min = h2;
	printf("the min size is %dx%d\n",max,min);

}

void swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *b ^ *a;
	*a = *a ^ *b;
}

