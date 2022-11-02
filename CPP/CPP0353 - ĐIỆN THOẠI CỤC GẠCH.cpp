#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
#define getstr(s) getline(cin,s);
#define clearstr(); cin.ignore(200, '\n');
#define M 10001
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int id[27]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
bool check(string s)
{
int k=str.size();
map<char,int>p;
p.clear();
for(int i=0;i<k;i++) 
p[str[i]]=id[i];
int n=s.size(),l=0,r=n-1;
for(int i=0;i<n;i++)
if(s[i]>='a'&&s[i]<='z')
s[i]-=32;
while(l<r)
if(p[s[l++]]!=p[s[r--]])
 return 0;
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
if(check(s)) yes
else no
}
}
