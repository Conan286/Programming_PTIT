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
#define ll long long
#define N 10001
#define yes puts("YES");
#define no puts("NO");
using namespace std;
void nhap(ll a[],int n)
{
for(int i=0;i<n;i++){
cin>>a[i];
a[i]*=a[i];
}
sort(a,a+n);
}
int solve(ll a[],int n)
{
//1 9 16 25 36
            
for(int i=n-1;i>=2;i--)
{
int l=0,r=i-1;
while(l<r){
if(a[l]+a[r]==a[i]) return 1;
else if(a[l]+a[r]>a[i]) --r;
else ++l;
}

}
return 0;
}
main()
{
int t,n,k;
cin>>t;
while(t--)
{
cin>>n;
ll a[n];
nhap(a,n);
if(solve(a,n)) yes
else no
}
}
