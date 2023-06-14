#include<bits/stdc++.h>
using namespace std;
int k,ok=1,h[101],c[101],cc[101],cp[101],sum,n=8,vt[11][11],cnt=0;
void Try(int a[][9],int i)
{
for(int j=1;j<=8;j++)
{
	if(i==9)
	{
	++cnt;
	int s=0;
	for(int h=1;h<9;h++){
	for(int k=1;k<9;k++){
	if(vt[h][k]) {
	s+=a[h][k];
//	cout<<"[Q]";
	}
	}
	}
//	else cout<<"[ ]";
//	}
//    cout<<"\n";
//	}
//	cout<<"S="<<s<<endl;
	sum=max(sum,s);
	return;
	}
	if(!h[i]&&!c[j]&&!cc[n-i+j]&&!cp[i+j-1]&&!vt[i][j]){
	vt[i][j]=h[i]=c[j]=cc[n-i+j]=cp[i+j-1]=1;
	Try(a,i+1);
	vt[i][j]=h[i]=c[j]=cc[n-i+j]=cp[i+j-1]=0;
	}
}
}
int main()
{
int t;
cin>>t;
while(t--)
{
int a[9][9];
for(int i=1;i<9;i++) for(int j=1;j<9;j++) cin>>a[i][j];
sum=0;
memset(h,0,sizeof(h)); memset(c,0,sizeof(c));
memset(cc,0,sizeof(cc)); memset(cp,0,sizeof(cp)); memset(vt,0,sizeof(vt));
Try(a,1);
cout<<sum<<"\n";
}
}
