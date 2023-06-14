#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
int m,n,t,l,r;
cin>>t;
while(t--){
cin>>m;
int a[m],b[n];
for(int i=0;i<m;i++) cin>>a[i];
sort(a,a+m);

for(int i=0;i<m;i++) cout<<a[i]<<" "; cout<<endl;
}
}
