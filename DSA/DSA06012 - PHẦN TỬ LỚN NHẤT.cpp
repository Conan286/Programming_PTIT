#include<bits/stdc++.h>
#define ll long long
#define N 1000001
using namespace std;
int snt[N];
void init()
{
snt[0]=snt[1]=0;
for(int i=2;i<N;i++) snt[i]=1;
for(int j=2;j*j<N;j++)
for(int i=j*j;i<N;i+=j)
snt[i]=0;
}
int main()
{
int t,n,x;
cin>>t;
while(t--)
{
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++) {cin>>a[i]; }
sort(a,a+n);
for(int i=n-1;i>n-1-x;i--) cout<<a[i]<<" ";
cout<<endl;
}
}

