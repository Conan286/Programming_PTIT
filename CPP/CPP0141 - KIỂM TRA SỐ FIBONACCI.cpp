#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 93
 using namespace std;
ll fi[N];
 void init()
 {
 fi[0]=0,fi[1]=1;
 for(int i=2;i<N;i++) fi[i]=fi[i-1]+fi[i-2];
}
int binary(ll fi[],ll n,int l,int r)
{
int m=(l+r)/2;
if(l<=r) {
if(fi[m]==n) return m;
else if(fi[m]<n) return binary(fi,n,m+1,r);
else return binary(fi,n,l,m-1);
}
return -1;
}
main()
{
init();
int t;
ll n;
cin>>t;
while(t--)
{
cin>>n;
if(binary(fi,n,0,N)!=-1) yes
else no
}
}



