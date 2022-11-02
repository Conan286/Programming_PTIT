#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#define cout(n) cout<<n<<endl;
#include <algorithm>
#define cin(n) cin>>n;
#define ll long long
using namespace std;
ll gt[21];
void init()
{
gt[0]=gt[1]=1;
for(int i=2;i<21;i++)
gt[i]=i*gt[i-1];
}
int main()
{
int n;
init();
cin>>n;
ll s=0;
for(int i=1;i<=n;i++) s+=gt[i];
cout<<s;
}
