//id:11063
#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int th, thl, sum;
		scanf("%lld %lld %lld",&th,&thl, &sum);
		long long int n = (2*sum)/(th+thl);
		printf("%lld\n",n);
		long long int d = (thl-th)/(n-5);
		long long int a = th - 2*d;
		long long int i;
		for(i =0;i<n;i++)
			printf("%lld ",a+i*d);
		printf("\n");
	}

	return 0;
}
