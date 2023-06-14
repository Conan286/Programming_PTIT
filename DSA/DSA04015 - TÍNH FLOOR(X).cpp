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
void input(int a[],int n);
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n];
        input(a,n);
        int ans=lower_bound(a,a+n,k+1)-a;
		if(ans==0) ans=-1;
        cout<<ans<<endl;
    }
    return 0;
}
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
