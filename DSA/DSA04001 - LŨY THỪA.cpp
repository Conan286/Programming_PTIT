#include<bits/stdc++.h>
#define ll long long
ll m=1000000007;
using namespace std;
ll pow(int n,int k);
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k;
cin>>n>>k;
cout<<pow(n,k)<<endl;
}
}
ll pow(int n,int k)
{
if(k==0) return 1;
ll x=pow(n,k/2);
if(k%2==0) return x*x%m;
return ((n%m)*(x*x%m))%m;
}

