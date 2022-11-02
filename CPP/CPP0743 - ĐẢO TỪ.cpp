#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
int t;
cin>>t;
cin.ignore();
while(t--)
{
string s;
vector<string>v;
//fflush(stdin);
getline(cin,s);
//fflush(stdin);
string tmp,str="";
stringstream ss(s);
while(ss>>tmp)
v.push_back(tmp);
int n=v.size();
for(int i=n-1;i>0;i--) 
str+=v[i]+" ";
str+=v[0];
cout<<str<<endl;
}
}

