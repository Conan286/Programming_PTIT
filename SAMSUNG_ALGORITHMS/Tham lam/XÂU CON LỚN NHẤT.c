#include<stdio.h>
#include<string.h>
char dp[100002];
char max(char a,char b)
{
return a>b?a:b;
}
main()
{
char s[100001];
scanf("%s",&s);
int n=strlen(s);
dp[n-1]=s[n-1];
for(int i=n-1;i>=0;i--) dp[i]=max(s[i],dp[i+1]);
for(int i=0;i<n;i++) if(dp[i]==s[i]) printf("%c",dp[i]);
}
////ababba
////bbbbba
//abbcbccacbbcbaaba
//   c cc c  cb  ba
