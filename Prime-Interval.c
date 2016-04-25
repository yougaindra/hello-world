#include<stdio.h>
#include<math.h>
 
char r[46500];
int prime[46500];
int n=100000;
void pre()
{
	int i, j,cnt=0;
	for(i=1;i<230;i++)
	{
		if(r[i]==0)
		{
		j=(i+1)*(i+1)-1;
		for(;j<46500;j=j+i+1)
		{
			r[j]=1;
		}
		
		}
			
	}
	
	
	
	for(i=1;i<46500;i++)
	{
		if(r[i]==0)
		{
			prime[cnt++]=i+1;
		}
	}
}
char a[1000010];
 
void sieve(int low,int hi)
{
	int i,j,x,sq=sqrt(hi),pri;
	for(i=0;prime[i]<=sq;i++)
	{
			pri=prime[i];
			x=pri*pri;
			j=low/x;
			j=j*x;
			j=j-low;
			while(j<0) j=j+pri;
			for(;j<1000010;j=j+pri)
			{
				//if(j+low==7) printf("NO 7 %d ",i+1);
				if(j+low==pri) continue;
				a[j]=1;
				
				//printf("%d -> %d\n",j+low,i+1 );
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
		int m,n,diff;
		scanf("%d %d",&m,&n);
		diff=n-m;
		for(i=0;i<1000010;i++) a[i]=0;
		sieve(m,n);
		
		
			for(i=0;i<=diff;i++)
			{
				if(a[i]==0) printf("%d\n",i+m);
				//printf("%d",a[7]);
			}
			
			//for(i=0;i<100;i++) printf("%d ",prime[i]);
		
	}
	return 0;
} 
