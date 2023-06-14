#include<iostream>
#include<deque>
#include<set>
#define ll long long
using namespace std;
multiset<ll>doremon;
ll noiday1()
{
ll len=0;
while(doremon.size()!=1)
{
ll x=*doremon.begin();
doremon.erase(doremon.find(x));
ll y=*doremon.begin();
doremon.erase(doremon.find(y));
len+=(x+y);
doremon.insert(x+y);
}
return len;
}
int main()
{
int t,n;
ll x;
cin>>t;
while(t--)
{
doremon.clear();
cin>>n;
for(int i=0;i<n;i++){
cin>>x;
doremon.insert(x);
}
cout<<noiday1()<<endl;
}
}
