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
#include<iomanip>
#define ll long long

#define yes puts("YES");
#define no puts("NONE");
using namespace std;
int a[1001],n,k,ok=1;
void ktao()
{
for(int i=1;i<=k;i++)
a[i]=i;
}
void sinh()
{
int i=k;
while(a[i]==n-k+i and i>0) --i;
if(i==0) ok=0;
else{
a[i]++;
for(int j=i+1;j<=k;j++)
a[j]=a[j-1]+1;
}
}
int main()
{
int t;
cin>>t;
while(t--)
{
ok=1;
vector<string>v;
cin>>n>>k;
ktao();
while(ok)
{
string s="";
for(int i=1;i<=k;i++) s+=to_string(a[i]);
v.push_back(s);
sinh();
}
for(auto x:v) cout<<x<<" "; cout<<endl;
}
}


