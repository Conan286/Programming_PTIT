#include<bits/stdc++.h>
#define yes puts("YES");
#define no puts("NO");
#define N 40001
using namespace std;
int s;
bool check(int a[],int n)
{
int S[N];
memset(S,0,sizeof(S));
S[0]=1;
for(int i=0;i<n;i++)
for(int j=s;j>=a[i];j--)
if(!S[j] and S[j-a[i]])
S[j]=1;
return S[s];
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n>>s;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
if(check(a,n)) yes
else no
}
}
