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

int main()
{
int t,n;
ll a,b;
cin>>t;
while(t--)
{
cin>>a>>b;
cout<<a*(b/__gcd(a,b))<<" "<<__gcd(a,b)<<endl;
}
}
