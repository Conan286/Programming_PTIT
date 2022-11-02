#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[1001],i=0,chan=0,le=0;
		char kitu=' ';
		while(kitu!='\n')
		{
			scanf("%d",&a[i]);
			
			if(a[i]%2==0) ++chan;
			else ++le;
			++i;
			kitu=getchar();
		}
	if((i%2==0&&chan>le)||(i%2!=0&&le>chan))
	{
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	}
	
}

