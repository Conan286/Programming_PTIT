#include<iostream>
#include<cmath>
#define ios() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
bool check(int n)
{
    int sum = 1,k=sqrt(n);
    for (int i=2; i<=k; i++)
    {
        if (n%i==0)
        {
            if (n/i == i)
                sum = sum + i;
            else
            {
                sum = sum + i;
                sum = sum + (n / i);
            }
        }
        if(sum>n) return 1;
    }
    return sum>n;
}

main()
{
ios();
int n,s,t,a,b;
int cnt=0;
cin>>a>>b;
for(int i=a;i<=b;i++)
if(check(i))
++cnt;
cout<<cnt;
}



