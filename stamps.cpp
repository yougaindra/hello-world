//id:3375

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int tt;
	scanf("%d",&tt);
	for(int t=1;t<=tt;t++)
	{
		int min,num;
		scanf("%d %d",&min,&num);
		int a[num];
		int i;
		for(i=0;i<num;i++)
			scanf("%d",a+i);
		sort(a,a+num,std::greater<int>());
		int temp=0;
		i =0;
		while(temp<min && i<num)
			temp+=a[i++];

		if(temp >= min)
			printf("Scenario #%d:\n%d\n",t,i);
		else
			printf("Scenario #%d:\nimpossible\n",t);
	}
	return 0;
}
