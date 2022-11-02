#include<bits/stdc++.h>
#include<set>
#define ll long long
#define N 1001
using namespace std;
main()
{
set<int>p;
int n,x;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>x;
p.insert(x);
}
for(auto x:p)
cout<<x<<" ";
}


