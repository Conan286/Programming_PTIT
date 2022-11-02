#include<iostream>
#include<cstring>
#define ll long long
#define cin(n) cin>>n;
#define cout(n) printf("%d ",n);
#define N 1000001
#include<cstring>
using namespace std;
int snt[N];
void init()
{
snt[0]=snt[1]=0;
for(int i=2;i<N;i++)  snt[i]=1;
for(int i=2;i*i<N;i++)
for(int j=i*i;j<N;j+=i)
snt[j]=0;
}
bool check(int n)
{
string s=to_string(n);
int l=0,r=s.size()-1;
while(l<r)
if(s[l++] != s[r--])
return 0;
return 1;
}
int main()
{
int t,a,b;
init();
cin(t);
while(t--)
{
int cnt=0;
cin(a) cin(b)
for(int i=a;i<=b;i++){
if(snt[i] and check(i)){
cout(i)
cnt++;
if(cnt%10==0 and cnt>0) puts("");
}
}
puts("");
}
}
