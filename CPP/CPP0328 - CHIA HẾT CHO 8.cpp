#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <iterator>
#include <algorithm>
#include<sstream>
#define ll long long
#define N 20001
#define yes puts("YES");
#define no puts("NO");
#define Impossible puts("Impossible");
using namespace std;
int solve(string s,int k)
{
int n=s.size(),cnt=0;
for(int i=0;i<n;i++)
{
int num=0;
for(int j=i;j<n;j++)
{
num=num*10+(s[j]-'0');
num=num%k;
if(!num)++cnt;
}
}
return cnt;
}
main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int t;
string s;
ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
cin>>t;
while(t--)
{
cin>>s;
cout<<solve(s,8)-solve(s,24)<<"\n";
}
}
