#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 93
using namespace std;
bool check(int n)
{
int dem1=0;
for(int i=2;i<=sqrt(n);i++)
{
int cnt=0,check=0;
if(n%i==0){
 ++dem1;
 check=1;
 }
while(n%i==0){
++cnt;
n=n/i;
}
if(check&&cnt>1) return 0; 
}
if(n!=1)++dem1;
return dem1==3;
}
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
cout<<check(n)<<endl;
}
}



