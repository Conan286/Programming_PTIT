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
void nhap(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int mid(int a[],int n,ll sum[])
{
ll x=sum[n-1];
for(int i=n-2;i>0;i--)
if(x-sum[i-1]-a[i]==sum[i-1])
return i+1;
return -1;
}
main()
{
int t,n;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
while(t--)
{
cin>>n;
int a[n];
ll sum[n];
nhap(a,n);
sum[0]=a[0];
for(int i=1;i<n;i++)
sum[i]=sum[i-1]+a[i];
cout<<mid(a,n,sum)<<endl;
}
}
