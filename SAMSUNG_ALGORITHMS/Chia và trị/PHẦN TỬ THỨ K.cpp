#include<bits/stdc++.h>
#define yes puts("YES");
#define no puts("NO");
#define ll long long
using namespace std;
int main()
{
int t,m,n,k,x;
cin>>t;
while(t--)
{
int id=0;
cin>>m>>n>>k;
multiset<int>ms;
for(int i=0;i<m;i++)
{
cin>>x;
ms.insert(x);
}
for(int i=0;i<n;i++)
{
cin>>x;
ms.insert(x);
}
for(auto i:ms)
{
id++;
if(id==k){
 cout<<i<<endl;
 break;
}
}
}
}


