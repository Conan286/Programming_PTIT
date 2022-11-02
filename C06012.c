#include<stdio.h>
#include<string.h>
#include<math.h>
int snt(int n);
int test(int k[],int n);
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
int test(int k[],int n)
{
	
	if(n<2) return 0;
int l=0,r=n-1;
		while(l<=r)
		{
			if(k[l]!=k[r]||(!snt(k[l]))||(!snt(k[r])))
			{
			return 0;
			}
			l++;
			r--;
		}
		return 1;
}
int snt(int n){
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return n>1?1:0;
}

