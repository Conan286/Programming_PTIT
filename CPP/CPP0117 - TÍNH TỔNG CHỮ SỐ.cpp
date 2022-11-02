#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;
 int sum(int n)
 {
 int s=0;
 while(n!=0)
 {
 s+=n%10;
 n/=10;
 }
 return s;
 }
void solve(int n)
{
cin>>n;
while(n>9)
{
n=sum(n);
}
cout<<n<<endl;
}
main()
{
int t,n;
cin>>t;
while(t--)
{
solve(n);
}
}


