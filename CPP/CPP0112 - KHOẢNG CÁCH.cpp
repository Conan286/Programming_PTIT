#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;

double solve(double a,double b,double c,double d)
{
return sqrt((c-a)*(c-a)+(d-b)*(d-b));
}

main()
{
int t;
double a,b,c,d;
cin>>t;
string s;
while(t--)
{
cin>>a>>b>>c>>d;
cout<<setprecision(4)<<fixed<<solve(a,b,c,d)<<endl;
}
}


