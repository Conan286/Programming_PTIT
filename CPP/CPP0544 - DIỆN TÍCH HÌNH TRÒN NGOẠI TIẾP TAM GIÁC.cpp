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
#include<iomanip>
#define invalid puts("INVALID");
#define ll long long
#define PI 3.141592653589793238
using namespace std;
double a1,a2,b1,b2,c1,c2;
bool check(double a,double b,double c)
{
return (abs(a-b)<c&&a+b>c);
}
void solve()
{
double ab=sqrt((b1-a1)*(b1-a1)+(b2-a2)*(b2-a2));
double ac=sqrt((c1-a1)*(c1-a1)+(c2-a2)*(c2-a2));
double bc=sqrt((b1-c1)*(b1-c1)+(b2-c2)*(b2-c2));
double s=0.25*sqrt((ab+bc+ac)*(ab+bc-ac)*(bc+ac-ab)*(ac+ab-bc));
double r=(ab*bc*ac)/(4.0*s);
double ans=PI*r*r;
if(check(ab,bc,ac))
cout<<fixed<<setprecision(3)<<ans<<endl;
else 
invalid
//cout<<ab<<" "<<bc<<" "<<ac<<endl;
}
int main()
{
int t;
cin>>t;
while(t--)
{
cin>> a1>>a2>>b1>>b2>>c1>>c2;
solve();
}
}

