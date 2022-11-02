#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
using namespace std;
int solve(string s){
int p[10];
memset(p,0,sizeof(p));
int n=s.size();
if(s[0]=='0') return -1;
for(int i=0;i<n;i++)
{
if(s[i]<'0'||s[i]>'9') return -1;
else p[s[i]-'0']++;
}
for(int i=0;i<10;i++) if(!p[i]) return 0;
return 1;
}
main()
{
int t;
cin>>t;
string s;
while(t--)
{
cin>>s;
//solve(s);
if(solve(s)==-1) ivd
else if(solve(s)) yes
else no
}
}
