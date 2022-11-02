#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool check1(char s[])
{
	if((s[6]<s[7])&&(s[7]<s[8])&&(s[8]<s[10])&&(s[10]<s[11])) return true;
	return false;
}
bool check2(char s[])
{
	int dk1=0,dk2=0;
if(s[6]==s[7]&&s[7]==s[8]) dk1=1;
if(s[10]==s[11]) dk2=1;
if (dk1==1&&dk2==1) return true;
return false;
}
bool check3(char s[])
{
	
		
			if(s[6]!='6'&&s[6]!='8') return 0;
		if(s[7]!='6'&&s[7]!='8') return 0;
		if(s[8]!='6'&&s[8]!='8') return 0;
		if(s[10]!='6'&&s[10]!='8') return 0;
		if(s[11]!='6'&&s[11]!='8') return 0;
	
	return 1;
}
int main()
{
	int t;
	
	scanf("%d\n",&t);
	while(t--)
	{
		fflush(stdin);
		char s[1001];
		gets(s);
		fflush(stdin);
		
		if(check1(s)||check2(s)||check3(s)) {
		printf("YES\n");
	}
		else {
		printf("NO\n");
	}
	}
}


	

