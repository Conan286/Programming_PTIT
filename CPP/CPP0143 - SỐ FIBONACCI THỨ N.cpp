#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 93
 using namespace std;
ll fi[N];
 void init()
 {
 fi[0]=0,fi[1]=1;
 for(int i=2;i<N;i++) fi[i]=fi[i-1]+fi[i-2];
}
main()
{
init();
int t,n;
cin>>t;
while(t--)
{
cin>>n;
cout<<fi[n]<<endl;
}
}


