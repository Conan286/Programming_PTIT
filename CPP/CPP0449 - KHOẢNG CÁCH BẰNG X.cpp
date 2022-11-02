#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#define ll long long
#define N 10001
#define yes puts("YES");
#define no puts("NO");
using namespace std;
void nhap(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int check(int a[],int c,int x)
{
for(int i=c-1;i>0;i--){
int l=0;
while(a[i]-a[l]>x)++l;
if(a[i]-a[l]==x)
return 1;
}
return -1;
}
main()
{
int t,n,x,k;
cin>>t;
while(t--)
{
cin>>n>>x;
int p[n],c=0;
set<int>a;
a.clear();
for(int i=0;i<n;i++){
cin>>k;
a.insert(k);
}
set<int>::iterator it;
for(it=a.begin();it!=a.end();++it)
p[c++]=*it;
//for(auto x:a ) cout<<x<<" "; cout<<endl;
cout<<check(p,c,x)<<endl;
}
}

