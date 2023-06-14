#include<bits/stdc++.h>
#define ll long long
int m=1000000007;
using namespace std;
void solocphat2(int n);
int main()
{
int t;
int n;
cin>>t;
while(t--)
{
cin>>n;
solocphat2(n);
}
}
void solocphat2(int n)
{
deque<string>de;
de.push_front("6");
de.push_front("8");
vector<string>v;
string s=de.back();
while(s.size()<=n)
{
de.push_front(s+"6");
de.push_front(s+"8");
v.push_back(de.back());
de.pop_back();
s=de.back();
}

reverse(v.begin(),v.end());
for(auto x:v) cout<<x<<" "; cout<<endl;
}
