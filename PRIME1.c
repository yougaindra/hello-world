//Prime Generator
#include<stdio.h>
#include<math.h>
 
int r[31650];
int n=100000;
void pre()
{
	int i, j;
	for(i=1;i<230;i++)
	{
		if(r[i]==0)
		{
		j=(i+1)*(i+1)-1;
		for(;j<31650;j=j+i+1)
		{
			r[j]=1;
		}
		
		}
			
	}
}
int a[100010];
 
void sieve(int low,int hi)
{
	int i,j,x,sq=sqrt(hi);
	for(i=1;i+1<=sq;i++)
	{
		if(r[i]==0)
		{
			x=(i+1)*(i+1);
			j=low/x;
			j=j*x;
			j=j-low;
			while(j<0) j=j+i+1;
			for(;j<100010;j=j+i+1)
			{
				//if(j+low==7) printf("NO 7 %d ",i+1);
				if(j+low==i+1) continue;
				a[j]=1;
				//printf("%d -> %d\n",j+low,i+1 );
			}
		}
	}
}
 
int main()
{
	pre();
	int t;
	scanf("%d",&t);
	while(t--)
	{
		
		int i,j;
		int m,n;
		scanf("%d %d",&m,&n);
		for(i=0;i<100000;i++) a[i]=0;
		sieve(m,n);
		if(m==1)i=1;
		else i=0;
		for(;i+m<=n;i++)
		{
			if(a[i]==0) printf("%d\n",i+m);
		}
	}
	return 0;
}  
