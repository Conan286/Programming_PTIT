#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll res(int n)
{
return (ll) (n+1)*n/2;
}
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
cout<<res(n)<<endl;
}
}

