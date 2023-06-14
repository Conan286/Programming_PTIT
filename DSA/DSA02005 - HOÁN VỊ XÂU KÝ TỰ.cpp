#include<bits/stdc++.h>
using namespace std;
string s;
int ok=1;
void sinh()
{
int i=s.size()-2;
while(s[i]>s[i+1]&&i>=0)i--;
if(i<0) ok=0;
else
{
//1259874 1279854
int j=s.size()-1;
while(s[i]>s[j])j--;
swap(s[i],s[j]);
int l=i+1,r=s.size()-1;
while(l<r)swap(s[l++],s[r--]);
}
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>s;
ok=1;
sort(s.begin(),s.end());
while(ok)
{
cout<<s<<" ";
sinh();
}
cout<<endl;
}
}
