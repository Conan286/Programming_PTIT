#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j;
	scanf("%d",&t);
	while(t--)
	{
		char s[10001];
		scanf("%s",&s);
		int id[10];
		for(i=0;i<10;i++)
		{
			id[i]=0;
		}
		int n=strlen(s),dk=1;
		for(i=0;i<n;i++)
		{
			if(s[i]<'0'||s[i]>'9'||s[0]=='0') {
				dk=0;
				printf("INVALID\n");
				break;
			}
		}
		if(dk)
		{
		
			
			
			int index=1;
			for(i=0;i<n;i++)
		{
			if(s[0]!=0){
			
		id[s[i]-'0']++;
	}
	
		}
		for(i=0;i<10;i++)
		{
			if(id[i]==0)
			{
				index=0;
				printf("NO\n");
				break;
			}
		}
		if(index)
		{
			printf("YES\n");
		}
		}
	
	}
}

