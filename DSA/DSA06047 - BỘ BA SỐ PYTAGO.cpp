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
#include<iomanip>
#define ll long long

#define yes puts("YES");
#define no puts("NO");
using namespace std;

int check(ll a[],int n)
{
sort(a,a+n);
for(int i=n-1;i>1;i--)
{
int l=0,r=i-1;
while(l<r){
if(a[l]+a[r]==a[i]) return 1;
else if(a[l]+a[r]>a[i]) r--;
else ++l;
}
}
return 0;
}
void input(ll a[],int n)
{
for(int i=0;i<n;i++) { cin>>a[i]; a[i]*=a[i];}
}
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
ll a[n];
input(a,n);
if(check(a,n)) yes
else no
}
}
