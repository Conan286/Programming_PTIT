#include<bits/stdc++.h>
#define yes puts("YES");
#define no puts("NO");
#define ll long long
using namespace std;
int solve(int a[],int n)
{
int b[n],ans=a[0];
for(int i=0;i<n;i++) b[i]=a[i];
for(int i=1;i<n;i++) b[i]=max(b[i],b[i]+b[i-1]);
for(int i=0;i<n;i++) ans=max(ans,b[i]);
return ans;
}
int main()
{
int t,n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
do{
for(int i=0;i<n;i++) cout<<a[i]<<" ";
cout<<endl;
}
while(next_permutation(a,a+n));
}




