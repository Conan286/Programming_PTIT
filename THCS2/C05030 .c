#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>
#define ll long long
#define inp(n) scanf("%d",&n);
#define inpstr(s) scanf("\n%[^\n]s",&s);
#define wrll(x) printf("%lld\n",x);
#define re(a,b) scanf("%d %d",&a,&b);
ll countdiemanh(char s[][1001],int m,int n)
{
	ll count=0;
	int i,j,h,k;
	for(i=0;i<m;i++)
	{
	int x=0,y=0;
	for(j=0;j<n;j++)
	{
		if(s[i][j]=='0') continue;
		for(h=0;h<n;h++){
			if(s[i][j]=='1'&&s[i][h]=='2') ++x;
			if(s[i][j]=='2'&&s[i][h]=='1') ++x;
			}
			for(k=0;k<m;k++){
			 if(s[i][j]=='1'&&s[k][j]=='2')++y;
			if(s[i][j]=='2'&&s[k][j]=='1')++y;
	
	}
	count+=(ll)x*y;
	x=0,y=0;
}
	}
	return count;
}
main()
{
	int t,i,j;
	inp(t)
	while(t--)
	{
    int m,n;
    re(m,n)
    char s[m][1001];
    for(i=0;i<m;i++) scanf("%s",&s[i]);
    wrll(countdiemanh(s,m,n))
    
	
	 }
}


