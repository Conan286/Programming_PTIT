#include<bits/stdc++.h>
#define yes puts("YES");
#define no puts("NO");
#define ll long long
using namespace std;
int sum(int n)
{
int s=0;
while(n)
{
s+=n%10;
n/=10;
}
return s;
}
bool smith(ll n)
{
ll k=n,s=0;
for(int i=2;i<=sqrt(k);i++)
{
while(k%i==0)
{
s+=sum(i);
k/=i;
}
}
if(k>1) s+=sum(k);
return sum(n)==s;
}

int main()
{
int t;
string s,tmp;
cin>>t;
while(t--)
{
scanf("\n");
getline(cin,s);
stringstream ss(s);
vector<string>v;
string ans="";
while(ss>>tmp)
{
reverse(tmp.begin(),tmp.end());
v.push_back(tmp);
}
for(int i=0;i<v.size()-1;i++)
{
ans+=v[i];
ans+=" ";
}
ans+=v[v.size()-1];
cout<<ans<<endl;
}
}


