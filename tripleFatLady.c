#include <stdio.h>
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long unsigned int n;
		scanf("%llu",&n);
		printf("%llu\n",192+(n-1)*250);
	}
	
	return 0;
} 
//id 1030
