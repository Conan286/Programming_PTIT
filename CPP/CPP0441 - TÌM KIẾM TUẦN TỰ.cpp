#include<bits/stdc++.h>
#include<set>
#include<vector>
#define yes puts("YES");
#define no puts("NO");
#define ll long long
#define N 100001
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int solve(int a[],int n,int x)
{
for(int i=0;i<n;i++)
if(a[i]==x) return i+1;
return -1;
}

main()
{
int t,n,x;
cin>>t;
map<int,int >c;
while(t--)
{
cin>>n>>x;
int a[n];
input(a,n);
cout<<solve(a,n,x)<<endl;
}
}

