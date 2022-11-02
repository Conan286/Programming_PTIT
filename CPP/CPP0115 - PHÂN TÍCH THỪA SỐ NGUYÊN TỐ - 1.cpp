#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;
void solve(int n)
{
cin>>n;
for(int i=2;i<=sqrt(n);i++)
{
int cnt=0,check=0;
if(n%i==0) check=1;
while(n%i==0){
++cnt;
n/=i;
}
if(check)
cout<<i<<" "<<cnt<<" ";
}
if(n!=1) cout<<n<<" 1";
cout<<endl;
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


