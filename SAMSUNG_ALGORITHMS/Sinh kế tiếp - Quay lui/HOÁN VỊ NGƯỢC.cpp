#include<bits/stdc++.h>
#define yes puts("YES");
#define no puts("NO");
#define ll long long
using namespace std;
int a[101], n;
vector<string>mp;
void ktao()
{
for(int i=1;i<=n;i++)
a[i]=i;
}
int main()
{
int t;
cin>>t;
while(t--)
{
	mp.clear();
	cin>>n;
	ktao();
	do{
	string s="";
	 for(int i=1;i<=n;i++) s+=to_string(a[i]);
	 mp.push_back(s);
	}while(next_permutation(a+1,a+n+1));
	reverse(mp.begin(),mp.end());
	for(auto x:mp) cout<<x<<" ";
	cout<<endl;
}
}


