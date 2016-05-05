//id : 7424

#include <stdio.h>

void swap(int *a, int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	while(1)
	{
		if(a==-1 || b==-1)
			break;

		if(b>a)
			swap(&a,&b);

		b+=1;
		if(a%b==0)
			printf("%d\n",a/b);
		else
			printf("%d\n",a/b+1);
		scanf("%d %d",&a,&b);

	}

	return 0;
}
