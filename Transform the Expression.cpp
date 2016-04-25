//spoj id:4
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char q[500],ans[500];
		scanf("%s",q);
		int cnt =0 ;
		stack<char> sign;
		int i;
		for(i=0;q[i] != '\0';i++)
		{
			if(q[i] =='(')
				continue;else
			if(q[i] >= 'a' && q[i] <= 'z')
				ans[cnt++] = q[i];else
			if(q[i] == '+' || q[i] == '-' || q[i] == '*' || q[i] == '/' || q[i] == '^')
				sign.push(q[i]);
			else if(q[i] == ')')
			{
				ans[cnt++] = sign.top();
				sign.pop();
			}
		}
		ans[cnt] ='\0';
		printf("%s\n",ans);
	}

	return 0;	
}
