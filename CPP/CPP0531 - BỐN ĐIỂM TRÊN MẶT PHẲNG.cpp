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
#define ll long long

using namespace std;
struct vt{
ll x,y,z;
};
vt tich(vt a,vt b)
{
vt t;
t.x=a.y*b.z-a.z*b.y;
t.y=a.z*b.x-a.x*b.z;
t.z=a.x*b.y-a.y*b.x;
return t;
}
bool check(vt a,vt b,vt c,vt d)
{
vt ab,ac,ad,abc;
ll kq;
//
ab.x=b.x-a.x, ab.y=b.y-a.y, ab.z =b.z-a.z;
ac.x=c.x-a.x, ac.y=c.y-a.y, ac.z =c.z-a.z;
ad.x=d.x-a.x, ad.y=d.y-a.y, ad.z =d.z-a.z;
abc=tich(ab,ac);
kq=ad.x*abc.x+ad.y*abc.y+ad.z*abc.z;
return (kq==0);
}
int main() {
int t;
cin>>t;
vt a,b,c,d;
while(t--)
{
cin>>a.x>>a.y>>a.z;
cin>>b.x>>b.y>>b.z;
cin>>c.x>>c.y>>c.z;
cin>>d.x>>d.y>>d.z;
if(check(a,b,c,d)) puts("YES");
else puts("NO");
}
}

