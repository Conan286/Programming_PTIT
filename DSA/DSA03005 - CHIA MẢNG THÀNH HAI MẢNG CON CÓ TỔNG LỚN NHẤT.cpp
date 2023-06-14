#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,k;
cin>>t;
while(t--)
{
cin>>n>>k;
int a[n],s=0,s1=0;
for(int i=0;i<n;i++) { cin>>a[i]; s+=a[i];}
sort(a,a+n);
for(int i=0;i<min(k,n-k);i++) s1+=a[i];
cout<<s-2*s1<<endl;
}
}

