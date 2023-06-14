#include<bits/stdc++.h>
#define ll long long
#define N 1000001
using namespace std;
int snt[N];
void init()
{
snt[0]=snt[1]=0;
for(int i=2;i<N;i++) snt[i]=1;
for(int j=2;j*j<N;j++)
for(int i=j*j;i<N;i+=j)
snt[i]=0;
}
int main()
{
int t,n;
init();
cin>>t;
while(t--)
{
cin>>n;
if(snt[n-2]) cout<<2<<" "<<n-2<<endl;
else {
	int id=0;
	for(int i=3;i<=n/2;i+=2)
	if(snt[i] and snt[n-i]){
	cout<<i<<" "<<n-i<<endl;
	id=1;
	 break;
}
if(!id) puts("-1");
}
}
}
