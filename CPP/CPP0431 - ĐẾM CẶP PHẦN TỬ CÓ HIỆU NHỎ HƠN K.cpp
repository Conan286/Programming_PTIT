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
ll res(int a[],int n,int k)
{
ll cnt=0;
for(int i=n-1;i>0;i--)
cnt+=i-(upper_bound(a,a+i,a[i]-k)-a);
return cnt;
}
main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,n,m,k;
cin>>t;
while(t--)
{
cin>>n>>k;
int a[n];
nhap(a,n);
sort(a,a+n);
cout<<res(a,n,k)<<endl;
}
}
