#include<iostream>
#include <fstream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N INT_MAX
using namespace std;
int ans(int n)
{
if(n%2!=0) return 0;
int cnt=1;
for(int i=2;i<=sqrt(n);i++)
{
	if(n%i==0 and i*i!=n)
	{
	 if(i%2==0)++cnt;
	 if((n/i)%2==0)++cnt;
	}
	if(n%i==0 and i*i==n and i%2==0) ++cnt;
}

return cnt;
}
main()
{
int n,s,t;
cin>>t;
while(t--)
{
cin>>n;
cout<<ans(n)<<endl;
}
}


