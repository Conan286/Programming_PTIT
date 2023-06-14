#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
int m,n,t,l,r;
cin>>t;
while(t--){
cin>>m>>n;
ll a[m],b[n];
vector<ll>v1,v2;
for(int i=0;i<m;i++){

 cin>>a[i];
 v1.push_back(a[i]);
}
for(int i=0;i<n;i++){

 cin>>b[i];
 v2.push_back(b[i]);
}
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
cout<<v1[v1.size()-1]*v2[0]<<endl;

}
}
