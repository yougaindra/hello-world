// id:4300
#include <stdio.h>


int main()
{
	int n;
	scanf("%d",&n);
	int i,j,ans =0;
	for(i=1;i<=n;i++)
	{
		int temp = 0;
		for(j=1;j*j<=i;j++)
		{
			if(i%j==0)
				ans++,temp++;
		}
		//printf("%d %d\n",i,temp);
	}
	printf("%d\n",ans );
	return 0;
}
