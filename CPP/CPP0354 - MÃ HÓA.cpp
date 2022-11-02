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
using namespace std;
void solve(string a)
{
int n=a.size();
int cnt=0;
stack<char>s;
for(int i=0;i<n;i++)
{
if(!s.size()||a[i]==s.top()) s.push(a[i]);
else{
cout<<s.top()<<s.size();
while(!s.empty()){
s.pop();
}
s.push(a[i]);
}
}
if(!s.empty()) cout<<s.top()<<s.size();
cout<<endl;
}
main()
{
int t,n;
cin>>t;
string a;
while(t--){
cin>>a;
solve(a);
}
}
