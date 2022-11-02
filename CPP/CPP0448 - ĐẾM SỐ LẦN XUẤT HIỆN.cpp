#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
using namespace std;
main()
{
int t,n,x,k;
cin>>t;
map<int,int>p;
while(t--)
{
p.clear();
cin>>n>>x;
for(int i=0;i<n;i++)
{
cin>>k;
p[k]++;
}
cout<<(p[x]>0?p[x]:-1)<<endl;
}
}


