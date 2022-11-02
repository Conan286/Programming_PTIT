#include<iostream>
#include<set>
#include<map>
#include<cstring>
#include<vector>
#include<algorithm>
#include <sstream>  
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
#define fo(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
ll kanade(int a[],int n)
{
ll max_pre=0,res=0;
int check=0;
for(int i=0;i<n;i++)
{
if(a[i]>0) check=1;
max_pre+=a[i];
if(max_pre>res) res=max_pre;
else if(max_pre<0) max_pre=0;
}
if(!check) return -1;
return res;
}
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<kanade(a,n)<<endl;
}
}


