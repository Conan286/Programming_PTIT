#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
using namespace std;
bool cmp(int a,int b)
{
return a>b;
}
int first(int a[],int n)
{

}
main()
{
int t,m,n,x=0,k;
cin>>t;
set<int>s;
map<int,int>p;
while(t--)
{
cin>>n;
p.clear();
int a[n],b[n],c=0,res;
for(int i=0;i<n;i++){
cin>>a[i];
p[a[i]]++;
if(p[a[i]]>1&&c<1) {
res=a[i],c=1;
}
}
if(!c) puts("-1");
else cout<<res<<endl;
}
}


