#include<stdio.h>
 
long long int max(long long int a, long long int b)
{
	return a>b?a:b;
}
 
long long int dp[10000000]={0};
 
long long int solve(long long int n)
{
 
		if(n<12)
			return n;
		else if(n<10000000 && dp[n]!=0)
			return dp[n];
 
		long long int a = solve(n/2)+solve(n/3)+solve(n/4);
		if(n<10000000)
			dp[n]=a;
		return a;
 
 
}
 
int main()
{
	long long int n;
	while(scanf("%lld",&n)!=EOF)
		printf("%lld\n",solve(n));
	return 0;
} 
