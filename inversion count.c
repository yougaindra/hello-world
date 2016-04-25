#include<stdio.h>
#include<string.h>
long long int inv=0;
void merge(int a[], int start, int mid, int end)
{
	int i,j;
	int temp[end-start+1];
	i=start;
	j=mid+1;
	int cnt=0;
	while(i<=mid && j<=end)
	{
		if(a[i]<a[j])
		{
			temp[cnt++]=a[i++];
 
		}
		else
		{
			inv+=(mid-i+1);
			temp[cnt++]=a[j++];
			
 
		}
	}
 
	while(j<=end)
	{
		temp[cnt++]=a[j++];
	}
	while(i<=mid)
		temp[cnt++]=a[i++];
 
	cnt=0;
	for(i=start;i<=end;i++)
	{
		//printf("%d- %d %d %d\n",temp[cnt],start,mid,end);
		a[i]=temp[cnt++];
 
	}
 
}
 
void sort(int a[], int start,int end)
{
	if(start<end)
 
	{
		sort(a,start,(end+start)/2);
		sort(a,(end+start)/2+1,end);
		merge(a,start,(end+start)/2,end);
	}
	/*int i;
	for(i=start;i<=end;i++)
		printf("%d ",a[i]);*/
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
 
{
	int n;
	scanf("%d",&n);
	int i=0,a[n];
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
 
	sort(a,0,n-1);
	i=0;
	/*for(i=0;i<n;i++)
	{
		//printf("%d ",a[i]);
	}*/
 
	printf("%lld\n",inv);
	inv=0;
}
	return 0;
 
} 
