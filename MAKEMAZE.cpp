#include<stdio.h>
#include<stack>
typedef struct // structure to store location of entrance and exit of maze
{
	int x;
	int y;
}loc;
 
char a[20][20];
int b[20][20];
int DFS(int stx,int sty,int enx,int eny,int flag,int limx,int limy);
int DFS(int stx,int sty,int enx,int eny,int flag,int limx,int limy)
{
	b[stx][sty]=1;                 // (stx,sty)=entrance (enx,eny)=exit
	
	if(stx==enx && sty == eny)     //flag indicates if maze is solved
	{
		flag=1;
		return flag;
	}
	else if(flag==1)
	{
		return flag;
	}
	else
	{
		if(stx!=0 && a[stx-1][sty]=='.')
		{
			if(b[stx-1][sty]!=1)
			{
				if(flag==0)
				flag=DFS(stx-1,sty,enx,eny,flag,limx,limy);
			}
		}
		if(stx!=limx-1 && a[stx+1][sty]=='.')
			{
			if(b[stx+1][sty]!=1)
			{
				if(flag==0)
				flag=DFS(stx+1,sty,enx,eny,flag,limx,limy);
			}
			}
		if(sty!=0 && a[stx][sty-1]=='.')
			{
			if(b[stx][sty-1]!=1)
			{
				if(flag==0)
				flag=DFS(stx,sty-1,enx,eny,flag,limx,limy);}
			}
		if(sty!=limy-1 && a[stx][sty+1]=='.')
			{
			if(b[stx][sty+1]!=1)
			{
				if(flag==0)
				flag=DFS(stx,sty+1,enx,eny,flag,limx,limy);
			}
			}
		
	}
	return flag;
}
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		
		
 
		int i,j,m,n,cnt=0;
		loc t[2];
		char temp;
		scanf("%d %d",&m,&n);
		for(i=0;i<20;i++)
			for(j=0;j<20;j++)
			{
				a[i][j]='#';
				b[i][j]=0;
			}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				temp='\0';
				while(temp!='#' && temp!='.')
					scanf("%c",&temp);
				if(temp=='.')
					a[i][j]=temp;
				if(i==0 || i== m-1||j==0||j==n-1)
				{
					if(a[i][j]=='.'){
						if(cnt<2){
							t[cnt].x=i;
							t[cnt].y=j;
						}
						cnt++;
					}
				}
			}
		}
 
		if(cnt!=2)
		{
			printf("invalid\n");
		}
		else
		{
			if(DFS(t[0].x,t[0].y,t[1].x,t[1].y,0,m,n)==1)
				printf("valid\n");
			else
				printf("invalid\n");
		}
	}
	return 0;
} 
