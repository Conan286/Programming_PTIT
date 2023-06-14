#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
int t,r;
cin>>t;
while(t--)
{
cin>>r>>s;
cout<<r<<" ";
int n=s.size(),i=n-2;
while(i>=0 and s[i]>=s[i+1]) i--;
if(i<0) {
cout<<"BIGGEST\n";
}
else{
int j=n-1;
while(s[i]>=s[j]) j--;
swap(s[i],s[j]);
int l=i+1,r=n-1;
while(l<r) swap(s[l++],s[r--]);
cout<<s<<endl;
}
}
}
