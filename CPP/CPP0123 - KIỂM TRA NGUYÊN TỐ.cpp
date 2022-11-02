#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;
bool check(int n)
{
int k=sqrt(n);
for(int i=2;i<=k;i++) if(n%i==0) return 0;
return n>1;
}
main()
{
int n;
cin>>n;
if(check(n)) yes
else no
}

