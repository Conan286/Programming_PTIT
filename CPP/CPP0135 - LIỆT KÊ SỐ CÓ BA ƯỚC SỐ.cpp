#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 1000001
int snt[N];
 using namespace std;
 void init()
 {
 memset(snt,0,sizeof(snt));
 snt[0]=snt[1]=1;
 for(int i=2;i*i<N;i++)
 for(int j=i*i;j<N;j+=i)
 snt[j]=1;
 }
void solve(int n)
{
if(n>=4) cout<<4<<" ";
for(int i=3;i<=sqrt(n);i+=2) 
if(!snt[i]) 
cout<<i*i<<" ";
cout<<endl;
}
main()
{
init();
int t,k,n;

cin>>t;
while(t--)
{
cin>>n;
solve(n);
}
}

