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
void solve(int a,int b)
{
if(a>b) swap(a,b);
for(int i=a;i<=b;i++)
if(!snt[i]) cout<<i<<" ";
cout<<endl;
}
main()
{
init();
int t,a,b;
cin>>t;
while(t--)
{
cin>>a>>b;
solve(a,b);
}
}

