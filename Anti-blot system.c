//id :2157

#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char ch[199];
		char n1[100],n2[100],n3[100];
		scanf("%s + %s = %s",n1,n2,n3);
		//printf("%s %s %s",n1,n2,n3);

		int i,ind= -1;
		for(i=0;n1[i]!='\0' && ind == -1;i++)
			if(n1[i]>='a' && n1[i] <= 'z')
				ind = 1;
		for(i=0;n2[i]!= '\0' && ind == -1;i++)
			if(n2[i] >= 'a'  && n2[i] <= 'z')
				ind= 2;
		if(ind == -1)
			ind = 3;

		int num1=0, num2=0,num3=0;
		
		if(ind != 1)
		{
			for(i=0;n1[i] != '\0'; i++)
				num1 = num1*10 + (n1[i]-'0');
		}

		if(ind != 2)
		{
			for(i=0;n2[i] != '\0'; i++)
				num2 = num2*10 + (n2[i]-'0');
		}

		if(ind != 3)
		{
			for(i=0;n3[i] != '\0'; i++)
				num3 = num3*10 + (n3[i]-'0');
		}



		if(ind==1)
			printf("%d + %d = %d\n",num3-num2,num2,num3);
		if(ind==2)
			printf("%d + %d = %d\n",num1,num3-num1,num3);
		if(ind==3)
			printf("%d + %d = %d\n",num1,num2,num2+num1);
		//puts(ch);


	}

	return 0;
}
