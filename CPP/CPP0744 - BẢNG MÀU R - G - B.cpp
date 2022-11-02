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
#include<string.h>
#define ll long long
#define li long int
#define mpi map<int,int>
#define vi vector<int>
#define si set<int>
#define vll vector<long long>
#define vs vector<string>
#define vb vector<bool>
#define mps map<string,int>
#define yes puts("YES");
#define no puts("NO");
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define N 21
#define cin(a,b,c,d) cin>>a>>b>>c>>d;
using namespace std;
ll gt[N];
void init()
{
gt[0]=gt[1]=1;
for(int i=2;i<N;i++)
gt[i]=gt[i-1]*i;
}
ll ans(int n,int r,int g,int b)
{
/*r0>=r
  g0>=g
  b0>=b
  r0+g0+b0<=n
*/
ll cnt=0;
for(int r0=n;r0>=r;r0--)
for(int g0=n-r0;g0>=g;g0--)
{
int b0=n-r0-g0;
if(b0>=b) cnt+=gt[n]/(gt[b0]*gt[g0]*gt[r0]);
}
return cnt;
}
int main()
{
    fast()
int t,n,r,g,b;
init();
cin>>t;
while(t--)
{
cin(n,r,g,b);
cout<<ans(n,r,g,b)<<endl;
}
}
