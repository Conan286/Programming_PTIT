#include<iostream>
#include<iomanip>
using namespace std;
struct toado{
int x,y;
};
double ans(toado td[],int n)
{
int s1=0,s2=0;
for(int i=0;i<n;i++)
s1+=td[i].x*td[i+1].y;
for(int i=0;i<n;i++)
s2+=td[i].y*td[i+1].x;
return 0.5*(s1-s2);
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
toado td[n+1];
for(int i=0;i<n;i++)
cin>>td[i].x>>td[i].y;
td[n]=td[0];
cout<<setprecision(3)<<fixed<<ans(td,n)<<endl;
}
}                   
