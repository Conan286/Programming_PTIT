#include<iostream>
#include <fstream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include <iomanip> 
#define ll long long
#define yes puts("Yes");
#define no puts("No");
ll N =1e9 +7;
using namespace std;
void nhap(ll a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
ll res(ll a[],int n)
{
ll gx=a[0],hx=a[0];
for(int i=1;i<n;i++) 
gx=__gcd(gx,a[i]);
for(int i=1;i<n;i++)
hx=((hx%N)*(a[i]%N))%N;
ll m=hx;
for(int i=1;i<gx;i++)
hx=(hx*m)%N;
return hx;
}
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
ll a[n];
nhap(a,n);
cout<<res(a,n)<<endl;
}
}

