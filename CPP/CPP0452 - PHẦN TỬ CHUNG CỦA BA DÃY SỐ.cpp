#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <iterator>
#include <algorithm>
#include<sstream>
#define ll long long

using namespace std;
int main()
{
int t,n1,n2,n3;
cin>>t;
while(t--)
{
cin>>n1>>n2>>n3;
ll a[n1],b[n2],c[n3];
vector<ll>v;
v.clear();
for(int i=0;i<n1;i++) cin>>a[i];
for(int i=0;i<n2;i++) cin>>b[i];
for(int i=0;i<n3;i++) cin>>c[i];
int i,j,k;
i=j=k=0;
while(i<n1&&j<n2&&k<n3)
{
if(a[i]==b[j]&&b[j]==c[k]) v.push_back(a[i]),i++;
else if(a[i]<b[j]) i++;
else if(b[j]<c[k]) j++;
else k++;
}
if(v.size()>0) for(auto x:v) cout<<x<<" ";
else cout<<-1;
cout<<endl;
}
}




