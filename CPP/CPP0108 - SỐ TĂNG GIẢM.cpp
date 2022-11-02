#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 93
 using namespace std;
bool tang(int n)
{
while(n>9)
{
if((n%10)<=((n/10)%10)) return 0;
n=n/10;
}
return 1;
}
bool giam(int n)
{
while(n>9)
{
if((n%10)>=((n/10)%10)) return 0;
n=n/10;
}
return 1;
}
bool snt(int n)
{
int k=sqrt(n);
for(int i=2;i<=k;i++)
if(n%i==0) 
return 0;
return n>1;
}
void solve(int n)
{
int cnt=0;
int a=pow(10,n-1),b=pow(10,n);
for(int i=a;i<=b;i++)
if((tang(i)||giam(i))&&snt(i)) 
++cnt;
cout<<cnt<<endl;
}
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
solve(n);
}
}



