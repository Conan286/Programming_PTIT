#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 93
using namespace std;
int gcd(int a,int b)
{
if(a%b==0) return b;
else return gcd(b,a%b);
}
int lcm(int a,int b)
{
return a*b/gcd(a,b);
}
int smu(int m,int n,int a)
{
if(m%a==0&&n%a==0) return (n/a - m/a +1);
//3 9 3  3
if(m%a!=0&&n%a==0) return (n/a-m/a);
//2 9 3  3
if(m%a==0&&n%a!=0) return (n/a-m/a+1);
//3 10 3 3
return (n/a-m/a);
//2 11 3 3

}
void solve(int m,int n,int a,int b)
{
int c=lcm(a,b);
//cout<<smu(m,n,a)<<endl<<smu(m,n,b)<<endl<<smu(m,n,c)<<endl;
cout<< smu(m,n,a)+smu(m,n,b)-smu(m,n,c)<<endl;
}
main()
{
int t,m,n,a,b;
cin>>t;
while(t--)
{
cin>>m>>n>>a>>b;
solve(m,n,a,b);
}
}



