#include<stdio.h>

void main()
{
	int n1,n2;
	scanf("%d",&n1);
	scanf("%d",&n2);
	if(n2==1 || n2<0 || n2<n1)
	{
		printf("invalid");
	}
	for(int i=n1;i<=n2;i++)
	{
		int count=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count=1;
			}
		}
		if(count==0 )
		{
			printf("%d ",i);
		}
	}
}
