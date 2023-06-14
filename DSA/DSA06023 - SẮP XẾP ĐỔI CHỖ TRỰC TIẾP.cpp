#include<bits/stdc++.h>
#define yes puts("YES");
#define no puts("NO");
#define ll long long
using namespace std;
void dctt(int a[],int n)
{
	int cnt=1;
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
if(a[j]<a[i]) swap(a[i],a[j]);
cout<<"Buoc "<<cnt++<<": ";
for(int i=0;i<n;i++) cout<<a[i]<<" ";
cout<<endl;
}
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
dctt(a,n);
}
