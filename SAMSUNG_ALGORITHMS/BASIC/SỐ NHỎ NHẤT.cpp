#include<iostream>
#include <fstream>
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
#define N INT_MAX
using namespace std;
char num[11]={'0','1','2','3','4','5','6','7','8','9'};
void solve(int m,int s)
{
if(m*9<s||(s==0&&m>1)) puts("-1");
else if(m==1&&s==0) puts("0 0");
else{
vector <int> v1,v2;
int s1=s,s2=s,i=1;
int z=(m-1)*9;
int k=(s2-z>0)?(s2-z):1;
s2-=k;
v2.push_back(k);
while(i<m)
{
k=(s2>=9)?9:(s2>=0?s2:0);
v2.push_back(k);
s2-=k;
i++;
}
reverse(v2.begin()+1,v2.end());
for(auto x:v2) cout<<x; cout<<"\n";

//4 18
//1
//17
//
//so dau tien =s-(m-1) so dang sau*9
}
}
main()
{

int t,m,s;
cin>>t;
while(t--){
cin>>s>>m;
solve(m,s);
}
}

