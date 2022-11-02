#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
using namespace std;
main()
{
int t,n,x=0,ma;
cin>>t;
vector<int>p;
while(t--)
{
ma=0;
p.clear();
cin>>n;
for(int i=0;i<n;i++)
{
cin>>x;
p.push_back(x);
ma=max(ma,x);
}
cout<<ma<<endl;
}
}

