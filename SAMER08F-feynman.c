#include<stdio.h>
 
int main()
{
	int n,res;
	scanf("%d",&n);
	while(n!=0)
	{
		res=n;
		res=res*(n+1);
		res=res*(2*n+1);
		res=res/6;
		printf("%d\n",res);
		scanf("%d",&n);
	}
	return 0;
} 
