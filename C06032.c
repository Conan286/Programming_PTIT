#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#define in(s) scanf("%s",&s)
#define nhap(n) scanf("%d",&n)
int main()
{
	int t;
	nhap(t);
	while(t--)
	{
		int n,i,j,id=0;
		scanf("%d",&n);
		//char chuoi[1001];
		char s[101][101];
		char temp[101];
		for(i=0;i<n;i++) scanf("%s", s[i]);
		for(i=0;i<n;i++)
		{
			for(j=n-1;j>i;j--)
			{
				char s1[101],s2[101];
				strcpy(s1,s[i]);
				strcat(s1,s[j]);
				strcpy(s2,s[j]);
				strcat(s2,s[i]);
				if(strcmp(s1,s2)>0)
				{
				strcpy(temp,s[j]);
				strcpy(s[j],s[i]);
				strcpy(s[i],temp);	
				}
			}
		}
	
	for(i=0;i<n;i++)	printf("%s",s[i]);
	puts("");
			}
}



