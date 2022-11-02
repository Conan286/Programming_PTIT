#include<iostream>
#include<cstring>
using namespace std;
string next(string s)
{
int check=1;
int n=s.size();
for(int i=0;i<n;i++)
if(s[i]!='1')
check=0;
if(check) {
for(int i=0;i<n;i++)
s[i]='0';
return s;
}
else if(!check){
int i=n-1;
while(s[i]=='1' and i>=0){
s[i]='0';
i--;
}
s[i]='1';
return s;
}
}
main()
{
int t;
string s;
cin>>t;
while(t--)
{
cin>>s;
cout<<next(s)<<endl;
}
}
