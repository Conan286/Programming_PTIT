#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int n=s.size();
int i=n-1;
while(i>=0&&s[i]=='1')
s[i--]='0';
if(i>0) s[i]='1';
cout<<s<<endl;
}
}
