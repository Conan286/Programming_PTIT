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
ll dsa03004(int a[],int n);
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<dsa03004(a,n)<<endl;
    }
    return 0;
}
ll dsa03004(int a[],int n)
{
ll x=0,y=0;
sort(a,a+n);
for(int i=0;i<n;i+=2) x=x*10+a[i];
for(int i=1;i<n;i+=2) y=y*10+a[i];
return x+y;
}
