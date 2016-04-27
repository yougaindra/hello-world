// spoj id:54
#include <stdio.h>
#include <string.h>

void zer(char *ch , int *num)
{
	int cnt = 0,i;
	int zeros = 101 -strlen(ch);
	for(i=0;i<zeros;i++)
		num[i] = 0;
	while(cnt < strlen(ch))
		num[i++] = ch[cnt++]-'0';
}

void add(int *a, int *b,int *ans)
{
	int carry = 0,i;

	for(i=100;i>=0;i--)
	{
		//printf("%d duck\n",i);

		int temp = a[i]+b[i]+carry;
		int num = temp%10;
		carry = temp/10;
		ans[i] = num;
	}

}

void sub(int *a, int *b, int *ans)
{
	int i;
	for(i=100;i>=0;i--)
	{
		if(a[i] - b[i] >=0)
			ans[i] = a[i]-b[i];
		else
		{
			ans[i] = 10+a[i]-b[i];
			a[i-1]-=1;
		}
	}

}


void div(int *a,int b, int *ans)
{
	int carry = 0,i;
	for(i=0;i<101;i++)
	{
		ans[i] = (a[i]+carry*10)/2;
		carry = (a[i] + carry*10)%2;
	}

}

void print(int *a)
{
	int i=0;
	while(a[i]==0)
		i++;
	for(;i<101;i++)
		printf("%d",a[i]);
	
	printf("\n");

}

int main()
{
	int t = 10;
	while(t--)
	{
		char sum[101],diff[101];
		scanf("%s %s",sum,diff);
		int s[101],d[101];
		zer(sum,s);
		zer(diff,d);
		//print(s);

		int ss[101],dd[101];

		add(s,d,ss);
		sub(s,d,dd);

		int dss[101],ddd[101];
		div(ss,2,dss);
		div(dd,2,ddd);

		print(dss);
		print(ddd);
	}

	return 0;
}
