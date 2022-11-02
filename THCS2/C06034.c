#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define re(n) scanf("%d",&n);
#define wr(n) printf("%d",&n);
#define ll long long
char lama[]="IVXLCDM";
int change(char x)
{
	switch (x)
	{
		case 'I':
			return 1;
			break;
			case 'V':
			return 5;
			break;
			case 'X':
			return 10;
			break;
			case 'L':
			return 50;
			break;
			case 'C':
			return 100;
			break;
			case 'D':
			return 500;
			break;
			case 'M':
			return 1000;
			break;
	}
}
int solm(char *s)
{
int n=strlen(s),i,j;
int res=change(s[n-1]);
for(i=n-1;i>0;i--)
{
	if(change(s[i])<=change(s[i-1])) res+=change(s[i-1]);
	else res-=change(s[i-1]);
	}
	return res;	
}
void solve(char *s)
{
	
	printf("%d\n",solm(s));
	
}
main(){
	int t;
	re(t)
	while(t--)
	{
	char s[101];
	scanf("%s",&s);
	solve(s);
    }
}
	


