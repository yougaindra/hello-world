// id : 6219

#include <stdio.h>
#include <string.h>

int dp[2005][2005];


int min(int a, int b, int c)
{
	int ret = a;
	if(b<ret) ret = b;
	if(c < ret) ret = c;
	return ret;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s1[2005],s2[2005];
		scanf("%s %s",s1,s2);
		int len1 = strlen(s1);
		int len2 = strlen(s2);
		int i,j;
		for(i=0;i<=len1;i++)
			for(j=0;j<=len2;j++)
				dp[i][j] = 0;
		for(i=0;i<=len1;i++)
		{
			for(j=0;j<=len2;j++)
			{
				if(i==0)
					dp[i][j] = j;
				else if(j==0)
					dp[i][j] = i;
				else if(s1[i-1] == s2[j-1])
					dp[i][j] = dp[i-1][j-1];
				else
				{	
					dp[i][j] = min(dp[i-1][j-1],dp[i-1][j],dp[i][j-1]) + 1;
				}
			}
		}

		printf("%d\n",dp[len1][len2]);
/*
		for(i=0;i<=len1;i++)
		{
			for(j=0;j<=len2;j++)
			{
				printf("%d ",dp[i][j] );
			}
			printf("\n");
		}*/
	}

	return 0;
}
