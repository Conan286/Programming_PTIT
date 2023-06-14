#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	string s;
	vector<int> a[101];
	cin>>n;

	for(int i=1;i<=n;i++)
	{
	scanf("\n");
	getline(cin,s);
	
	s+=" ";
	int k=s.size();
	for(int j=0;j<k;j++)
	{
	if(s[j]>='0' and s[j]<='9')
	{
	int so=0;
	while(s[j]>='0' and s[j]<='9'){
	so=so*10+s[j]-'0';
	j++;
	}
//	cout<<"so = "<<so<<endl;
	a[i].push_back(so);
	}
	}
	}
	int check[101][101];
	memset(check,0,sizeof(check));
	for(int i=1;i<=n;i++)
	for(int j=0;j<a[i].size();j++)
    if(!check[i][a[i][j]] and !check[a[i][j]][i]){
	cout<<i<<" "<<a[i][j]<<endl;
	check[i][a[i][j]] = check[a[i][j]][i] = 1;
	}

}
