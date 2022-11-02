#include<bits/stdc++.h>
#define ll long long
using namespace std;
double res(int n)
{
double s=1;
for(int i=2;i<=n;i++) s+=1.0/i;
return s;
}
main()
{
int n;
cin>>n;
cout<<setprecision(4)<<fixed<<res(n);
}

