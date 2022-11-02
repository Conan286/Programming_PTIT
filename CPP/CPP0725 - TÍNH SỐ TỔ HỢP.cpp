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
#include <iomanip> 
#define ll long long
#define yes puts("Yes");
#define no puts("No");
#define N 1001
#define R 1001
using namespace std;
ll P=1e9+7;
ll C[N][R];
void init()
{
for(int i=0;i<N;i++)
for(int j=0;j<=i;j++)
{
if(i==0||j==i)
C[i][j]=1;
else
C[i][j]=(C[i-1][j-1]+C[i-1][j])%P;
}
}
main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,n,r;
cin>>t;
init();
//for(int i=0;i<N;i++) cout<<i<<" "<<gt[i]<<endl;
while(t--)
{
cin>>n>>r;
cout<<C[n][r]<<endl;
}
}

