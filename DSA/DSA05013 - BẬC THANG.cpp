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
int m= 1000000007;
using namespace std;
void ans(int n,int k)
{
ll a[100005];
memset(a,0,sizeof(a));
a[0]=a[1]=1;
for(int i=2;i<k;i++)
for(int j=0;j<i;j++)
a[i]=(a[i]+a[j])%m;
for(int i=k;i<=n;i++)
for(int j=i-1;j>=i-k;j--)
a[i]=(a[i]+a[j])%m;
cout<<a[n]<<endl;
}
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ans(n,k);
    }
    return 0;
}
