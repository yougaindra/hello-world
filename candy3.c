#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		long long int temp;
		scanf("%lld",&n);
		long long int mod=0;
		int i;
		for(i=0;i<n;i++)
		{
			
			scanf("%lld",&temp);
			mod = (mod + temp)%n;
			
		}
		
		if(mod == 0)
		printf("YES\n");
		else
		printf("NO\n");
	}

	return 0;
}
