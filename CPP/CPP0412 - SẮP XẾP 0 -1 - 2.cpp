#include<bits/stdc++.h>
#include<set>
#include<vector>
#define yes puts("YES");
#define no puts("NO");
#define ll long long
#define N 100001
using namespace std;

main()
{
int t,n;
cin>>t;
map<int,int >c;
while(t--)
{
c.clear();
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
c[a[i]]++;
}
for(int i=0;i<3;i++)
{
int k=c[i];
while(k--) cout<<i<<" ";
}
cout<<endl;
}
}

