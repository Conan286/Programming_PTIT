#include<bits/stdc++.h>
using namespace std;
int x;
bool cmp(int a,int b)
{
return abs(x-a)<abs(x-b);
}
int main()
{
int t;
cin>>t;
while(t--)
{
int m;
cin>>m>>x;
int a[m];
for(int i=0;i<m;i++)  cin>>a[i];
stable_sort(a,a+m,cmp);
for(int i=0;i<m;i++) cout<<a[i]<<" "; cout<<endl;
}
}

