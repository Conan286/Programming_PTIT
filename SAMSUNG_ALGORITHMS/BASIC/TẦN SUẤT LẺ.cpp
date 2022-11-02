#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
vector<int>a(n);
map<int,int>mp;
set<int>s;
for(int i=0;i<n;i++)
 {
   cin>>a[i];
   mp[a[i]]++;
   s.insert(a[i]);
 }
for(auto x:s)
{
if(mp[x]%2!=0) {
cout<<x<<endl;
break;
}
}
}
}

