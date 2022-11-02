#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#define cout(n) cout<<n<<endl;
#include <algorithm>
#define cin(n) cin>>n;
#define ll long long
using namespace std;

int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int id=n;
ll a[n],b[n-1];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n-1;i++)
cin>>b[i];
for(int i=0;i<n-1;i++)
if(a[i]!=b[i])
{
id=i+1;
break;
}
cout<<id<<endl;
}
}
