#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
using namespace std;
int solve(int a,int m)
{
for(int i=0;i<m;i++)
if((a*i)%m==1)
return i;
return -1;
}

main()
{
int t;
int a,m, n,p;
cin>>t;
while(t--)
{
cin>>a>>m;
cout<<solve(a,m)<<endl;
}
}

