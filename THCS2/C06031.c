#include<stdio.h>
#include<math.h>
#include"string.h"
#include<stdbool.h>
#define nhapchuoi(s) scanf("\n%[^\n]s",&s)
#define nhap(n) scanf("%d",&n);
int max(int a,int b)
{
	return a>b?a:b;
}
main()
{
	char xau[101]="abcdefghijklmnopqrstuvwxyz";
    char s[1001];
    nhapchuoi(s);
    int n=strlen(s);
    int l[n],i,j;
    l[0]=1;
	int maxsize=0;
    for(i=1;i<n;i++)
    {
    	l[i]=1;
    	for(j=0;j<i;j++) if(s[i]>s[j]) l[i]=max(l[i],l[j]+1);
	}
	for(i=0;i<n;i++) maxsize=max(maxsize,l[i]);
	printf("%d",26-maxsize);
}

