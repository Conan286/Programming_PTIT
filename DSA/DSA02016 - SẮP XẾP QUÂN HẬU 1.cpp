#include<bits/stdc++.h>
using namespace std;
int n,check[11][11],row[11],col[11],cc[101],cp[101],cnt=0;
void ptit(int i)
{
	for(int j=1;j<=n;j++){
	if(i==n+1)
	{
	++cnt;
	return;
	}
	if(!row[i]&&!col[j]&&!cc[n-i+j]&&!cp[i+j-1]&&!check[i][j])
	{
	check[i][j]=row[i]=col[j]=cc[n-i+j]=cp[i+j-1]=1;
	ptit(i+1);
	check[i][j]=row[i]=col[j]=cc[n-i+j]=cp[i+j-1]=0;
	}
}
}
int main()
{
int t;
cin>>t;
while(t--)
{
memset(row,0,sizeof(row)); memset(col,0,sizeof(col));
memset(cc,0,sizeof(cc)); memset(cp,0,sizeof(cp));
memset(check,0,sizeof(check));
cnt=0;
cin>>n;
ptit(1);
cout<<cnt<<"\n";
}
}
