#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 1001
using namespace std;
void nhap(int a[],int n)
{
for(int i=0;i<n;i++) cin>>a[i];
}
int solve(int a[],int n)
{
int m=a[1]-a[0];
for(int i=1;i<n;i++) m=min(m,a[i]-a[i-1]);
return m;
}
using namespace std;
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
nhap(a,n);
sort(a,a+n);
cout<<solve(a,n)<<endl;
}
}

