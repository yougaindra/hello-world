//id :1436
#include <bits/stdc++.h>

using namespace std;

vector <int> graph[100000];
int dis[100000]= {0};

void dfs(int node)
{
	dis[node] = 1;
	int i;

	for(i=0;i < graph[node].size();i++)
	{
		if(dis[graph[node][i]] == 0)
			dfs(graph[node][i]);
	}
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i;
	for(i=0;i<m;i++)
	{
		int u,v;
		scanf("%d %d",&u,&v);
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	int flag= 1;
	if(m!=n-1)
		printf("NO\n");
	else
	{
		dfs(1);
		for(i=1;i<=n;i++)
			//printf("%d\n",dis[i]);
			if(dis[i] == 0)
				flag = 0;
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}
