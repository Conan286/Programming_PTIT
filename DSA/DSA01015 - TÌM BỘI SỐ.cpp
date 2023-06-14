#include<bits/stdc++.h>
using namespace std;
int n;
bool check(string s)
{
int k=0;
for(char i:s)
{
k=k*10+i-'0';
k=k%n;
}
return k==0;
}
string Ptit()
{
deque<string>x;
x.push_back("9");
if(check(x.front())) return x.front();
while(!check(x.front()))
{
string ans=x.front();
x.pop_front();
string s1=ans+"0";
if(check(s1)) return s1;
string s2=ans+"9";
if(check(s2)) return s2;
x.push_back(s1);
x.push_back(s2);
}
return "0";
}
int main()
{
int t; cin>>t; while(t--)
{
cin>>n;
cout<<Ptit()<<endl;
}
}
