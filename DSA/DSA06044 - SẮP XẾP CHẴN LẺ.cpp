#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(int a,int b)
{
return a>b;
}
int main()
{
int t,n;
cin>>n;
int a[n];
vector<int>b,c;
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i+=2)
b.push_back(a[i]);
for(int i=1;i<n;i+=2)
c.push_back(a[i]);
sort(b.begin(),b.end());
sort(c.begin(),c.end(),cmp);
int i=0,k=min(b.size(),c.size());
while(i<k)
{
cout<<b[i]<<" "<<c[i]<<" ";
i++;
}
if(b.size()>c.size()) cout<<b[b.size()-1];
if(b.size()<c.size()) cout<<c[c.size()-1];
}

