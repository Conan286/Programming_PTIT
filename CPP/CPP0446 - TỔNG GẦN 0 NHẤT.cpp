#include<iostream>
#include<set>
#include<map>
#include<cstring>
#include<vector>
#include<algorithm>
#include <sstream>  
#include<cmath>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
#define fo(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int solve(int a[],int n)
{
//-66 -60 -8
int res=a[1]+a[0];
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
res=((abs(a[i]+a[j])<abs(res))?(a[i]+a[j]):res);
}
}
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
cout<<solve(a,n)<<endl;
}
}



