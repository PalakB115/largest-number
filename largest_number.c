#include <stdio.h>

int main()
{
	int a, b;
	
	printf("enter two num ");
	scanf("%d %d", &a, &b);
	
	if (a > b)
	{
		printf("%d is the greatest", a);
	}
	else if (b > a)
	{
		printf("%d is the greatest", b);
	}
	else 
	{
		printf("both num are equal");
	}
	
	return 0;
}

