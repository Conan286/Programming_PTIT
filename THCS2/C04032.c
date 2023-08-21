#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#define scan(n) scanf("%d",&n);
#define print(n) printf("%d ",n);
int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a<b?a:b;
}
bool check(char s[],int n)
{
	int k=n-1,i;
	for(i=k;i>0;i--) if(s[i]<s[i-1]) return 0;
	return 1;
}
void swap(int *a,int *b)
{
	int t=*b;
	*b=*a;
	*a=t;
}
void swapstr(char x[],char y[])
{
	char t[1001];
	strcpy(t,y);
	strcpy(y,x);
	strcpy(x,t);
}
main()
{
	char x[1001];
	char s[9999][101];
	int n=0,i,j;
	//luu cac so vao mang
	while(scanf("%s",x)!=-1)
	{
		strcpy(s[n++],x);
	}
	/*gets(x);
	char *token;
	token=strtok(x," ");
	while(token!=NULL)
	{
		strcpy(s[n++],token);
		token=strtok(NULL," ");
	}
*/
	int count[n],size=0;
	char s2[9999][101];
	for(i=0;i<n;i++)
	{
		int c=0;
		if(check(s[i],strlen(s[i])))
		{
			c=1;
			for(j=0;j<i;j++) if(strcmp(s[i],s[j])==0) c=0;
			if(c)
			{
				int dem=0;
				for(j=i;j<n;j++) if(strcmp(s[i],s[j])==0)++dem;
				strcpy(s2[size],s[i]);
				count[size]=dem;
				++size;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=size-1;j>i;j--)
		
			if(count[i]<count[j])
			{
		
				swap(&count[i],&count[j]);
			
				swapstr(s2[i],s2[j]);
			}
		}
for(i=0;i<size;i++)
	{
	printf("%s %d\n",s2[i],count[i]);
	}
}

