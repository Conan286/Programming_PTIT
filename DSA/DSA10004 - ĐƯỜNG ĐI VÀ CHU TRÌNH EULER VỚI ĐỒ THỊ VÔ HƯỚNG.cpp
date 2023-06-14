#include <bits/stdc++.h>
using namespace std;
int m,n,x,y;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       cin>>m>>n;
       
       map<int,int>mp;
       for(int i=0;i<n;i++)
	   {
	   cin>>x>>y;
	   mp[x]++;
	   mp[y]++;
	   }
	   int cnt=0;
	   for(int i=1;i<=m;i++)
	   if(mp[i]%2!=0)++cnt;
        if(cnt==0) puts("2");
        else if(cnt==2) puts("1");
        else puts("0");
    }
    return 0;
}
