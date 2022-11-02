#include<stdio.h>
#include<string.h>
#define ll long long
#define cin(n) scanf("%d",&n);
#define cout(n) printf("%d\n",n);
int gcd(int a,int b)
{
if(a%b==0) return b;
return gcd(b,a%b);
}
int main()
{
int t,a,b;
cin(t)
while(t--){
cin(a) cin(b)
cout(gcd(a,b))
}
}

