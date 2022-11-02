#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
using namespace std;

main()
{
int t,n,x,k;
cin>>t;
vector<int>v;
while(t--){
v.clear();
cin>>k>>n;
for(int i=0;i<k;i++)
for(int j=0;j<n;j++){
cin>>x;
v.push_back(x);
}
sort(v.begin(),v.end());
for(auto z:v) cout<<z<<" ";
cout<<endl;
}
}
