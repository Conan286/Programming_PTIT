#include<bits/stdc++.h>
using namespace std;
unsigned long long sum(int n)
{
return n*(n+1)/2;
}
int main()
{
int t;
unsigned long long n;
cin>>t;
while(t--)
{
cin>>n;
cout<<(n+1)*n/2<<endl;
}
}
