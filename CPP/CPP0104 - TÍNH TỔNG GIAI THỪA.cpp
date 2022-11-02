#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll res(int n)
{
ll s=1,r=1;
for(int i=2;i<=n;i++) {
r*=i;
s+=r;
}

return s;
}
main()
{
int n;
cin>>n;
cout<<res(n);
}

