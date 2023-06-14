#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
string s;
cin>>t;
while(t--)
{
scanf("\n");
getline(cin,s);
stringstream ss(s);
string tmp;
stack<string>st;
while(ss>>tmp)
{
	st.push(tmp);
}
while(st.size())
{
	cout<<st.top()<<" ";
	st.pop();
}
cout<<"\n";
}
}
