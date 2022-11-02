#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#define N 1001
#define in(n) scanf("%d",&n);
#define instr(s) scanf("\n%[^\n]s",&s);
bool sovong(char *a);
void display(char *a);
main()
{
	int t;
	in(t)
	while(t--)
	{
		char s[101];
		instr(s)
		display(s);
	}
}
void display(char *a)
{
	if(sovong(a)) puts("YES");
	else puts("NO");
}
bool sovong(char *a)
{
	int k=strlen(a)+1;
	int i=strlen(a)-1;
	int temp,x=0;
	while(i>-1)
	{
		//142857
		temp=a[i]-'0';
		if((temp*k+x)%10!=9) return 0;
		x=(temp*k+x)/10;
		i--;
	}
	return 1;
}


