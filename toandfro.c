//id:400
#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void rev(char *s,int n)
{
	int i;
	for(i=0;i<n/2;i++)
		swap(&s[i],&s[n-i-1]);
}

int main()
{
	int n;
	scanf("%d",&n);
	while(n)
	{
		int i;
		char s[205];
		scanf("%s",s);
		for(i=n;i<strlen(s);i= i+2*n)
			rev(s+i,n);
		
		int row = strlen(s)/n;
		for(i=0;i<n;i++)
		{
			int j=0;
			while(j<row)
				{
					printf("%c",s[n*j+i]);
					j++;
				}
		}
		printf("\n");

		scanf("%d",&n);
	}

	return 0;
}
