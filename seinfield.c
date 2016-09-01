#include <stdio.h>
#include <string.h>

int min(int a,int b)
{
	return a<b ? a:b;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int t1,t2;
		scanf("%d %d",&t1,&t2);
		int wt = t2-t1;
		int dp[wt+5];
		int n;
		scanf("%d",&n);
		int i;

		for(i=0;i<=wt+5;i++)
			dp[i] = 1e9;
		int v[n],w[n];
		for(i=0;i<n;i++)
			scanf("%d %d",&v[i],&w[i]);
		dp[0] = 0;
		for(i=1;i<=wt;i++)
		{
			int j;
			for(j=0;j<n;j++)
			{
				if(i < w[j]) continue;
				else if(dp[i-w[j]] == -1) continue;
				dp[i] = min(dp[i - w[j]] + v[j], dp[i]);
			}
		}

		if(dp[wt]== 1e9)
			printf("This is impossible.\n");
		else
			printf("The minimum amount of money in the piggy-bank is %d.\n",dp[wt]);
	}
	return 0;
}
