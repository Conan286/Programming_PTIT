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
#define k 1000000007
using namespace std;

inline int answer(int a[],int n)
{
int dp[n];
int res=a[0];
for(int i=0;i<n;i++)
dp[i]=a[i];
for(int i=1;i<n;i++)
for(int j=0;j<i;j++)
if(a[i]>a[j])
dp[i]=max(dp[i],dp[j]+a[i]);
for(auto x:dp) res=max(res,x);
return res;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<answer(a,n)<<endl;
    }
    return 0;
}
