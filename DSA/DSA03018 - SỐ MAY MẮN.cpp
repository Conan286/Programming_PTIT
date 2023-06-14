#include<bits/stdc++.h>
#define ll long long
using namespace std;
//n=7a+4b;
//n/7>=a>=0
//n/4>=b>=0
string ans(int n)
{
string res="";
int dem4=0,dem7=0;
for(int a=n/7;a>=0;a--)
if((n-a*7)%4==0)
{
dem7=a;
dem4=(n-a*7)/4;
break;
}
if(!dem4 and !dem7) return "-1";
else
{
for(int i=1;i<=dem4;i++) res+="4";
for(int i=1;i<=dem7;i++) res+="7";
}
return res;
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
cout<<ans(n)<<endl;
}
}
