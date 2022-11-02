#include<iostream>
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
#define N 10001
#define yes puts("YES");
#define no puts("NO");
using namespace std;
bool cmp(string a,string b)
{
string sa=a+b,sb=b+a;
return sa>sb;
}
main()
{
int t,n;
cin>>t;
string s;
vector<string>v;
while(t--)
{
cin>>n;
v.clear();
for(int i=0;i<n;i++){
cin>>s;
v.push_back(s);
}
sort(v.begin(),v.end(),cmp);
for(auto x:v) cout<<x;
cout<<endl;
}
}

