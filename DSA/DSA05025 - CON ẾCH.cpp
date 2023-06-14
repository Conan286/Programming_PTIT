#include<bits/stdc++.h>
#define ll long long
#define N 51
using namespace std;
ll frog[N];
void init()
{
frog[0]=0;
frog[1]=1;
frog[2]=2;
frog[3]=4;
for(int i=4;i<N;i++) frog[i]=frog[i-1]+frog[i-2]+frog[i-3];
}
int main()
{
int t;
int n;
cin>>t;
init();
while(t--)
{
cin>>n;
cout<<frog[n]<<endl;
}
}

