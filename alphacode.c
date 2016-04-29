//id:394

#include <stdio.h>
#include <string.h>

int a[5005];

int chk(int i)
{
	if(a[i]== 0 && (a[i-1] == 1 || a[i-1] == 2))
		return 2;
	if(a[i-1] == 1 && a[i] != 0)
		return 1;
	if(a[i-1] == 2 && a[i] <=6 && a[i] != 0)
		return 1;
	return 0;
}

int main()
{
	char ch[5005];
	scanf("%s",ch);
	while(strcmp(ch,"0"))
	{
		unsigned long long int i;
		for(i=0;ch[i]!='\0';i++)
			a[i] = ch[i]-'0';

		unsigned long long int dp[5005];

		dp[0] = 1;
		dp[1] = (chk(1)==1)?2:1;
		for(i=2;i<strlen(ch);i++)
		{
			if(chk(i)==1)
				dp[i] = dp[i-1] + dp[i-2];
			else if(chk(i)==0)
				dp[i] = dp[i-1];
			else
				dp[i] = dp[i-2];
			//printf("%llu\n",dp[i] );
		}

		printf("%llu\n",dp[strlen(ch)-1] );
		scanf("%s",ch);
	}
	return 0;
}
