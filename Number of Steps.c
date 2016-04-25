//SPOJ id 1112
#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		/*int x,y;
		scanf("%d %d",&x,&y);
		if(x==y)
		{
			if(x%2)
				printf("%d\n",x+y-1);
			else
				printf("%d\n",x+y);
		}
		else if(x == y+2)
		{
			if(x%2 == 0)
				printf("%d\n",x+y);
			else
				printf("%d\n",x+y-1);
		}
		else
			printf("No Number\n");
		*/
		x==y?(x%2?printf("%d\n",x+y-1):printf("%d\n",x+y)):(x == y+2 ? (x%2?printf("%d\n",x+y-1):printf("%d\n",x+y)):(printf("No Number\n")));
	}
	return 0;
}
