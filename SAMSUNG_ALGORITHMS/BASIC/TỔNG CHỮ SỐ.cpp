#include<stdio.h>
#include<string.h>
#define ll long long
#define cin(n) scanf("%lld",&n);
#define cins(n) scanf("%s",&n);
#define cout(n) printf("%lld\n",n);
int main()
{
int t,i,n,sum=0;
char s[10];
cin(t)
while(t--){
sum=0;
cins(s)
n=strlen(s);
for(i=0;i<n;i++ ) sum+=s[i]-'0';
cout(sum)
}
}

