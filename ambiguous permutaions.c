//id :379
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	
	while(n!=0)
	{
		int a[n];
		for(i=0;i<n;i++)
		scanf("%d",a+i);
		int new[n];
		for(i=0;i<n;i++)
			new[a[i]-1] = i+1 ;

		int flag = 1;
		for(i=0;i<n;i++)
			if(new[i]!=a[i])
				flag= 0;

		if(flag)
			printf("ambiguous\n");
		else
			printf("not ambiguous\n");

		scanf("%d",&n);
	}

	return 0;

}
