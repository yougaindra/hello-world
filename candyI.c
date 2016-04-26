#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	while(n!=-1)
	{
		int a[n];
		int i;
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		int sum = 0;
		for(i=0;i<n;i++)
			sum+=a[i];
		if((sum/n)*n != sum)
			printf("-1\n");
		else
		{
			int av =sum/n;
			int ans = 0;
			for(i=0;i<n;i++)
				if(a[i] < av)
					ans+=(av-a[i]);
			printf("%d\n",ans);
		}
		scanf("%d",&n);
	}

	return 0;
}
