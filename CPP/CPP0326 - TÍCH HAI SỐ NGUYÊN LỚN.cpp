#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <iterator>
#include <algorithm>
#include<sstream>
#define ll long long

using namespace std;
string tich(string a,string b)
{
string str="";
int n=a.length()+b.length()+10,k,m,l;
int s[n];
memset(s,0,sizeof(s));
reverse(a.begin(),a.end());
reverse(b.begin(),b.end());
//99
//999
//10989
//98901
for(int i=0;i<a.length();i++)
{
k=0,l=0;
for(int j=0;j<b.length();j++)
{
//10989
k=(a[i]-'0')*(b[j]-'0');//k=81
int x=(s[i+j]+k+l);
s[i+j]=x%10;//s[2]=8+81+9=8
l=x/10;//l=9
}
s[i+b.length()]=l;//s[4]=9
}
for(int i=a.length()+b.length()-1;i>=0;i--) str+=to_string(s[i]);
while(str[0]=='0') str.erase(str.begin());
if(str.length()==0) return "0";
return str;
}
int main()
{
int t;
string a,b;
cin>>t;
while(t--){
cin>>a>>b;
cout<<tich(a,b)<<endl;
}
}

