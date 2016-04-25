#include<stdio.h>
#include<math.h>
 
void multiply(int temp,int a[])
{
	int i,j;
	int tmp=0,carry=0;
	for(i=0;i<200;i++)
	{
		tmp=a[i]*temp;
		//if(tmp+carry==0) break;
		a[i]=(tmp+carry)%10;
		carry=(carry+tmp)/10;
		
	}
}
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int temp=n;
		int a[200];
		int i=0;
		while(temp>0)
		{
			a[i]=temp%10;
			temp=temp/10;
			i++;
			
		}
		for(;i<200;i++)
		{
			a[i]=0;
		}
		temp=n-1;
		while(temp>0)
		{
			multiply(temp,a);
			temp--;
		}
		i=199;
		while(a[i]==0) i--;
		for(;i>=0;i--)
		{
			printf("%d",a[i]);
		}
		printf("\n");
		
	}
	return 0;
} 
