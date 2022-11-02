#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>
bool checkthuannghich(char s[],int n)
{
	int l=0,r=n-1;
	while(l<=r){
		if(s[l]!=s[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int max(int a,int b)
{
	return a>b?a:b;
}
main()
{
	char s[50001];
	char tu[50001][21];
	int check[50001]={0};
	int maxsize=0,n=0,i,j;
	
	while(scanf("%s",s) != -1)
	{
		strcpy(tu[n],s);
		if(checkthuannghich(tu[n],strlen(tu[n]))) maxsize=max(strlen(tu[n]),maxsize);
		n++;
	}
	
for(i=0;i<n;i++)
{
	//AAA BAABA HDHDH ACBSD SRGTDH DDDDS DUAHD AAA AD DA HDHDH AAA AAA AAA AAA DDDAS HDHDH 
	if(checkthuannghich(tu[i],strlen(tu[i]))&&strlen(tu[i])==maxsize) check[i]=1;
	else check[i]=0;
}
for(i=0;i<n;i++)
{
	if(check[i]){
		for(j=i-1;j>=0;j--) if(strcmp(tu[i],tu[j])==0) check[i]=0;
	}
	if(check[i]){
		int dem=1;
		for(j=i+1;j<n;j++) if(strcmp(tu[i],tu[j])==0) ++dem;
		printf("%s %d\n",tu[i],dem);
	}
}
}
