#include<bits/stdc++.h>
#define run(t) cin>>t; while(t--)
#define N 1000001
using namespace std;
int nt[N];
void init()
{
for(int i=2;i<N;i++) nt[i]=1;
nt[0]=nt[1]=0;
for(int i=2;i*i<N;i++)
for(int j=i*i;j<N;j+=i)
nt[j]=0;
}
void solve(int n)
{
if(n<4) puts("-1");
else if(nt[n-2]){
cout<<2<<" "<<n-2<<endl;
}
else{
int k=n/2+1,id=0;
for(int i=3;i<k;i+=2)
if(nt[i] and nt[n-i])
{
id=1;
cout<<i<<" "<<n-i<<endl;
break;
}
if(!id) puts("-1");
}
}
main()
{
int t,n;
init();
run(t){
cin>>n;
solve(n);
}
}
