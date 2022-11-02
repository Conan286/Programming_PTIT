#include<stdio.h>
#include<string.h>
int main()
{
char s1[1001],s2[1001];
gets(s1);
fflush(stdin);
gets(s2);
fflush(stdin);
int n=strlen(s2),m=strlen(s1),k,i,j;

for(i=0;i<=m-n;i++)
{
	/*
	aaaaaabcde
	bcd
    01234567891011             	
	*/
	if(s1[i]==s2[0])
	{
		int index=i;
		int dem=1;
		for(j=i;j<i+n;j++)
		{
			if(s1[j]!=s2[j-index]){
				dem=0; break;
			}
		}
		if(dem==1)
		{
	
			for(k=index;k<m-n;k++)
			{
				s1[k]=s1[k+n];
				
			}
			m-=n;
		}
	}
}
for(i=0;i<m;i++)
{
	printf("%c",s1[i]);
}
}

