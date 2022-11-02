#include<bits/stdc++.h>
#include<set>
#include<map>
#include<cstring>
#include<vector>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
#define getstr(s) getline(cin,s);
#define cle(); cin.ignore(200, '\n');
#define M 10001
using namespace std;

void solve(string s)
{
for(int i=0;i<s.size();i++)
if(s[i]>='A'&&s[i]<='Z')
s[i]+=32;
 stringstream str(s);
 string s1,s2="";
 vector<string>v;
 v.clear();
 while(str>>s1)
 v.push_back(s1);
 int n=v.size();
 for(int i=0;i<n;i++)
 v[i][0]-=32;
 v[n-2]+=",";
 for(int i=0;i<n-1;i++)
 s2+=v[i]+" ";
 for(int i=1;i<v[n-1].size();i++) v[n-1][i]-=32;
 s2+=v[n-1];
 cout<<s2;
}
main()
{
string s;
getstr(s)
solve(s);
}

