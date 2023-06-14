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

#define yes puts("Yes");
#define none puts("empty");
using namespace std;

int ans(int a[],int n)
{
sort(a,a+n);
int r=a[1]-a[0];
for(int i=2;i<n;i++) r=min(r,a[i]-a[i-1]);
return r;
}
void input(int a[],int n)
{
for(int i=0;i<n;i++) cin>>a[i];
}
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n];
input(a,n);
cout<<ans(a,n)<<endl;
}
}
