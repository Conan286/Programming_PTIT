#include<bits/stdc++.h>
using namespace std;
string s;
int k;
string ans()
{
int n=s.size();
for(int i=0;i<n && k>0;i++)
{
char char_max=s[n-1];
int add=n-1;
for(int j=n-1;j>i;j--)
{
if(s[j]>char_max)
{
char_max=s[j];
add=j;
}
}
if(char_max>s[i])
{
swap(s[add],s[i]);
k--;
}
}
return s;
}
int main()
{
int t;
cin>>t;
while(t--)
{
cin>>k;
cin>>s;
cout<<ans()<<"\n";
}
}
