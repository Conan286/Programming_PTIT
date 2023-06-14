#include<bits/stdc++.h>
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
map<int,int>mp;
mp.clear();
for(int i=0;i<n;i++){
cin>>a[i];
mp[a[i]]++;
}
cout<<mp[0]<<endl;
}
}
