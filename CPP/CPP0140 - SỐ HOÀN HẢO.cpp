#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
using namespace std;
bool check(ll n)
{
if(n==6||n== 28||n==  496 ||n== 8128||n==33550336||n==8589869056||n==137438691328) return 1;
return 0;
}
main()
{
int t;
ll n,p;
cin>>t;
while(t--)
{
cin>>n;
cout<<check(n)<<endl;
}
}

