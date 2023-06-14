//123456
//
//4 1 3 413526(quay trai) -> 543216
//5 2 6
//
//1 5 2 152463(quay phai) -> 165432
//4 6 3
#include<bits/stdc++.h>
using namespace std;
string quaytrai(string s)
{
string ans="";
ans+=s[3]; ans+=s[0]; ans+=s[2]; ans+=s[4]; ans+=s[1]; ans+=s[5];
return ans;
}
string quayphai(string s)
{
string ans="";
ans+=s[0]; ans+=s[4]; ans+=s[1]; ans+=s[3]; ans+=s[5]; ans+=s[2];
return ans;
}
int bfs(string a,string b)
{
deque<pair<string,int>>dq;
map<string,bool>vs;
dq.push_back({a,0});
vs[a]=1;
while(dq.size())
{
pair<string,int> t=dq.front();
dq.pop_front();
//cout<<t.first<<" "<<t.second<<"\n";
if(t.first==b) return t.second;
string l=quaytrai(t.first);
string r=quayphai(t.first);
if(!vs[l]){
vs[l]=1;
dq.push_back({l,t.second+1});
}
if(!vs[r]){
vs[r]=1;
dq.push_back({r,t.second+1});
}
}
}
int main()
{
int t,x;
cin>>t;
while(t--)
{
string a="",b="";
for(int i=1;i<=6;i++) { cin>>x; a+=to_string(x);}
for(int i=1;i<=6;i++) { cin>>x; b+=to_string(x);}
cout<<bfs(a,b)<<"\n";
}
}


