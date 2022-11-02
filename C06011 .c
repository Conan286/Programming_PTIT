#include<stdio.h>
#include<string.h>
#include<math.h>
int test(int k[],int n)
{
		int l=0,r=n-1;
	if(k[l]!=8||k[r]!=8) return 0;
	if(n<2) return 0;

		int sum=0,i;
		for(i=0;i<n;i++)
		{
			sum+=k[i];
		}
		return sum%10==0?1:0;
}
int main()
{
	int t,i,j;
	scanf("%d",&t);
	fflush(stdin);
	for(i=0;i<t;i++)
	{
		fflush(stdin);
		char s[1001];
		scanf("%s",&s);
		fflush(stdin);
		int k[strlen(s)],u=0;
		for(j=0;j<strlen(s);j++)
		{
			k[u++]=s[j]-'0';
		}
	
		if(test(k,strlen(s))){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}	
}
}

