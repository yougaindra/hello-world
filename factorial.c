#include <stdio.h>
 
int main(void) {
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n,i,count=0,count2=0,count5=0;
		scanf("%d", &n);
		//i=n;
		for(i=5;n/i>=1;i=i*5)
		{   
	        
			count5=count5+n/i;
			//i--
		}
		printf("%d\n", count5);
	}
	// your code here
 
	return 0;
} 
