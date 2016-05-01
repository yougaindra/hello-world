// id:302
#include <stdio.h>

long long int num(long long int n)
{
	return (n*(2ll + (n-1)*4))/2;
}

long long int den(long long int n)
{
	return (n*(6ll + (n-1)*4))/2;
}


long long int nth(long long int n, long long int (*fun)(long long int) , long long int first)
{
	long long int l = 0, r = 1e7,mid,temp;
	while(l<r)
	{
		mid = (l+r+1)/2;
		if(fun(mid) >= n)
			r = mid-1;
		else if(fun(mid) < n)
			l = mid;

	}

	long long int N = n-fun(l);
	temp = (fun(l+1) - fun(l) -first)/4 + 1;

	temp = 2*(temp)  -(first == 1?1:0);
	if(N < temp)
		return N;
	else
	{
		N-=temp;
		return temp - N;
	}
}


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);

		long long int nr,dr;
		nr = nth(n,num,1);
		dr = nth(n,den,3);

		printf("TERM %lld IS %lld/%lld\n",n,nr,dr );
	}
	return 0;

}
