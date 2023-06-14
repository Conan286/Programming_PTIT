#include<bits/stdc++.h>
#define ll long long
int m=1000000007;
using namespace std;
string dsa08006(int n);
bool check(string s,int n)
{
int ans=0;
for(int i=0;i<s.size();i++){
ans=ans*10+s[i]-'0';
ans=ans%n;
}
return ans==0;
}
int main()
{
int t;
int n;
cin>>t;
while(t--)
{
cin>>n;
cout<<dsa08006(n)<<endl;
}
}
string dsa08006(int n)
{
deque<string>de;
de.push_front("9");
vector<string>v;
string s=de.back();
if(check(s,n)) return s;
while(1)
{
string a=s+"0";
if(check(a,n)) return a;
string b=s+"9";
if(check(b,n)) return b;
de.push_front(a);
de.push_front(b);
v.push_back(de.back());
de.pop_back();
s=de.back();
}
}



