#include<bits/stdc++.h>
#define ll long long
using namespace std;
int k;
string a, b;
string coso(int k,string a,string b)
{
//chuyen a va b sang he 10
//11->3 = 102
string c;
reverse(a.begin(),a.end());
reverse(b.begin(),b.end());
ll a1=0,b1=0,c1=0;
int n=a.size();
for(int i=0;i<n;i++)
a1+=pow(k,i)*(a[i]-'0');
n=b.size();
for(int i=0;i<n;i++)
b1+=pow(k,i)*(b[i]-'0');
c1=a1+b1;
stack<int>st;
while(c1)
{
st.push(c1%k);
c1/=k;
}
while(st.size())
{
	c+=to_string(st.top());
	st.pop();
}
return c;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	cin>>k>>a>>b;
	cout<<coso(k,a,b)<<endl;
	}
}

