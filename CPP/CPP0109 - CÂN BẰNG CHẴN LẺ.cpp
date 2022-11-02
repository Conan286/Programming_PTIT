#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;
 bool check(int n)
 {
 int c=0,l=0;
 while(n!=0)
 { 
 int t=n%10;
 if(t%2==0) ++c;
 else ++l;
 n/=10;
 }
 return c==l;
 }
void solve(int n){
int cnt=0;
switch (n)
{
case 2:
for(int i=10;i<100;i++) 
{
if(check(i)) {
cout<<i<<" ";
++cnt;
if(cnt%10==0&&cnt!=0) cout<<endl;
}
}
break;
case 4:
for(int i=1000;i<9999;i++)
{
if(check(i)) {
cout<<i<<" ";
++cnt;
if(cnt%10==0&&cnt!=0) cout<<endl;
}

}
break;
case 6:
for(int i=100000;i<999999;i++)
{
if(check(i)) {
cout<<i<<" ";
++cnt;
if(cnt%10==0&&cnt!=0) cout<<endl;
}
}
break;
}
}
main()
{
int t,n;
cin>>n;
solve(n);
}


