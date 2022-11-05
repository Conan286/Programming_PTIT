//B21DCCN441
/*
Cho số nguyên dương n. Hãy cho biết có bao nhiêu dãy số nguyên dương có tổng các phần tử trong dãy bằng n. 

Dữ liệu vào: dòng đầu tiên chứa số nguyên T là số bộ dữ liệu, mỗi bộ dữ liệu ghi một số nguyên dương n duy nhất không qua 1018. 

Kết quả: Mỗi bộ dữ liệu ghi ra một số nguyên duy nhất là số dư của kết quả tìm được khi chia cho 123456789.
*/
#include<iostream>
#include<cstring>
#include<map>
#include <iomanip>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define run(t) cin>>t; while(t--)
using namespace std;
ll mod=123456789;
ll pow(ll a,ll b)
{
if(b==0) return 1;
if(b==1) return a%mod;
ll k=pow(a,b/2);
if(b%2!=0) return a%mod*k%mod*k%mod;
else return k%mod*k%mod;
}
void solve()
{
ll n;
cin>>n;
cout<<pow(2,n-1)<<endl;
}
main()
{
int t;
run(t)
{
solve();
}
}
