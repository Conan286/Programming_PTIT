#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;
void solve(int n)
{
for(int i=2;i<=sqrt(n);i++)
{
int cnt=0,check=0;
if(n%i==0) check=1;
while(n%i==0)
{
++cnt;
n/=i;
}
if(check) cout<<i<<" "<<cnt<<endl;
}
if(n!=1) cout<<n<<" "<<1<<endl;
}
main()
{
int n;
cin>>n;
solve(n);
}

