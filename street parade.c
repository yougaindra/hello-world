#include<stdio.h>
 
void push(int st[],int *top, int n);
void pop(int st[],int *top);
 
void push(int st[],int *top, int n)
{
	*top=*top+1;
	st[*top]=n;
	
}
void pop(int st[],int *top)
{
	*top=*top-1;
}
 
int main()
{
int n;
scanf("%d", &n);
while(n!=0)
{    int cnt=1,temp,top=-1;
	int s[n],i;
	for(i=0;i<n;i++)
	{   scanf("%d",&temp);
		if(temp==cnt) cnt++;
		else push(s,&top,temp);
		while((top!=-1) &&(s[top]==cnt))
		{
			pop(s,&top);
			cnt++;
		}
	}
	if(top==-1) printf("yes\n");
	else printf("no\n");
	scanf("%d",&n);
	
	
	
}
return 0;
} 
