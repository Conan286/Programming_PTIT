#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
#define getstr(s) getline(cin,s);
#define clearstr(); cin.ignore(200, '\n');
#define M 10001
using namespace std;
main()
{
int n=0,a[M];
map<int,int>c;
c.clear();
while(cin>>a[n])
c[a[n++]]++;
for(int i=0;i<n;i++)
if(c[a[i]]>0)
cout<<a[i]<<" "<<c[a[i]]<<"\n",c[a[i]]=0;
}

