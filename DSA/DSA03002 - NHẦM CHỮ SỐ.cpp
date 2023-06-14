#include<bits/stdc++.h>
using namespace std;
int summax(string a,string b)
{
for(int i=0;i<a.size();i++)
if(a[i]=='5')
a[i]='6';
for(int i=0;i<b.size();i++)
if(b[i]=='5')
b[i]='6';
int x=0,y=0;
for(int i=0;i<a.size();i++) x=x*10+a[i]-'0';
for(int i=0;i<b.size();i++) y=y*10+b[i]-'0';
return x+y;
}
int summin(string a,string b)
{
for(int i=0;i<a.size();i++)
a[i]=(a[i]=='6')?'5':a[i];
for(int i=0;i<b.size();i++)
b[i]=(b[i]=='6')?'5':b[i];
int x=0,y=0;
for(int i=0;i<a.size();i++) x=x*10+a[i]-'0';
for(int i=0;i<b.size();i++) y=y*10+b[i]-'0';
return x+y;
}
int main()
{
int a,b;
string a1,b1;
cin>>a>>b;
a1=to_string(a);
b1=to_string(b);
cout<<summin(a1,b1)<<" "<<summax(a1,b1)<<endl;
}

