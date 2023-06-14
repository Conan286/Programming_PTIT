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
#define N 100005
#define yes puts("YES");
#define no puts("NO");
int m= 1000000007;
using namespace std;
int bacthang(int n,int k);
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cout<<bacthang(n,k)<<endl;
    }
    return 0;
}
int bacthang(int n,int k)
{
ll ptit[N];
memset(ptit,0,sizeof(ptit));
ptit[0]=ptit[1]=1;
for(int i=2;i<k;i++)
for(int j=0;j<i;j++)
ptit[i]=(ptit[i]+ptit[j])%m;
for(int i=k;i<=n;i++)
for(int j=i-1;j>=i-k;j--)
ptit[i]=(ptit[i]+ptit[j])%m;
return ptit[n];
}
