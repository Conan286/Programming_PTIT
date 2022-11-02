#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
using namespace std;
void print(int a[],int n)
{
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
void solve(int a[],int n)
{
map<int ,int >p;
p.clear();
for(int i=0;i<n;i++) p[a[i]]++;
for(int i=0;i<n-1;i++)
for(int j=n-1;j>i;j--)
if(p[a[i]]<p[a[j]]||(p[a[i]]==p[a[j]]&&a[i]>a[j]))
swap(a[i],a[j]);
}
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
map<int,int>p;
p.clear();
int a[n];
input(a,n);
solve(a,n);
print(a,n);
}
}

