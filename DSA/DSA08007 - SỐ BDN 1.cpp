#include<bits/stdc++.h>
#define ll long long
using namespace std;
deque<ll>q;
vector<ll>v;
ll n;
void init()
{
ll tmp=1;
q.push_back(tmp);
v.push_back(tmp);
while(q.front()<1e18)
{
	tmp=q.front();
	q.pop_front();
	q.push_back(tmp*10); v.push_back(tmp*10);
	q.push_back(tmp*10+1); v.push_back(tmp*10+1);
}
}
int main()
{
int t;
string s;
cin>>t;
init();
while(t--)
{
cin>>n;
int dem=0;
for(int i=0;i<v.size();i++)
{
if(v[i]>n) break;
else ++dem;
}
cout<<dem<<"\n";
}
}
