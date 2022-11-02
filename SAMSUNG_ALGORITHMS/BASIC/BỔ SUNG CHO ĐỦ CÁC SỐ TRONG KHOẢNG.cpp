#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
using namespace std;
main()
{
int t,n,x;
cin>>t;
while(t--)
{
cin>>n;
int ma=INT_MIN,mi=INT_MAX;
set<int>s;
for(int i=0;i<n;i++){
cin>>x;
s.insert(x);
ma=max(ma,x);
mi=min(mi,x);
}
cout<<ma-mi-s.size()+1<<endl;
}
}
