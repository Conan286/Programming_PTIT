#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
using namespace std;
main()
{
int t,n,x=0;
cin>>t;
vector<int>p;
set<int>k;
while(t--)
{
p.clear();
k.clear();
//cout<<p.size()<<" "<<k.size()<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>x;
p.push_back(x);
k.insert(x);
}
sort(p.begin(), p.end());
int res=p[p.size()-1]-p[0]-k.size()+1;
cout<<(res>0?res:0)<<endl;
}
}


