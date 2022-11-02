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
void nhap(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
void in(int a[],int n)
{
vector<int>v;
v.clear();
for(int i=0;i<n-1;i++)
if(a[i]==a[i+1]&&a[i]!=0)
a[i]*=2,a[i+1]=0;
for(int i=0;i<n;i++) if(a[i]!=0) v.push_back(a[i]);
for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
for(int i=v.size();i<n;i++) cout<<0<<" ";
cout<<endl;
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
nhap(a,n);
in(a,n);
}
}




