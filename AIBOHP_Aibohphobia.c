#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
	return a > b ? a:b;
}



void rev(char *ret, char *org)
{
	int i,len = strlen(org);
	for(i=0;i<len;i++)
		ret[len-i-1] = org[i];
}

char x[7000],y[7000];
int dp[7000][7000];

int lcs(i,j)
{
	if(i<0 || j <0)
		return 0;
	if(dp[i][j] != -1)
		return dp[i][j];
	if(x[i]==y[j])
	{
			dp[i][j] =  lcs(i-1,j-1)+1;
			return dp[i][j];
	}
	else
	{
		dp[i][j] = max(lcs(i-1,j),lcs(i,j-1));
		return dp[i][j];
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j;
		for(i=0;i<6000;i++)
			for(j=0;j<6000;j++)
				dp[i][j] = -1;
		scanf("%s",x);
		int n = strlen(x);
		rev(y,x);
		printf("%d\n",n - lcs(n-1,n-1));
	}
	return 0;
}
