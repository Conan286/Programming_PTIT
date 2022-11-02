#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,x;
	set<int>s1,s2;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
	  cin>>x;
	  s1.insert(x);
	}
	for(int i=0;i<n;i++)
	{
	  cin>>x;
	  s2.insert(x);
	}
	for(auto k:s1)
	if(s2.find(k)!=s2.end())
	cout<<k<<" ";
}

