#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define int long long
#define nhap(n) scanf("%d",&n);
int max(int a,int b){
	return a>b?a:b;
}
 main()
{
	char tu[9999][101];
	char s[9999];
	int n=0,i,szm=0,solan[9999],check[9999],j;
	for(i=0;i<9999;i++) {
	solan[i]=1;
	check[i]=0;
}
	while(scanf("%s",s) != -1){
	strcpy(tu[n],s);
	szm=max(strlen(tu[n]),szm);
	n++;
}
//vi tri nhung tu dai nhat 
for(i=0;i<n;i++)
{
	if(strlen(tu[i])==szm)
	{
		check[i]=1;
		for(j=0;j<i;j++)
		{
			if(strcmp(tu[i],tu[j])==0) check[i]=0;
		}
	}
}
//
for(i=0;i<n;i++)
{
if(check[i])
{
	for(j=i+1;j<n;j++){
		if(strcmp(tu[i],tu[j])==0){
			solan[i]++;
			}
	}
}
}
	for(i=0;i<n;i++) {
if(check[i])	printf("%s %d %d\n",tu[i],szm,solan[i]);

}
}
