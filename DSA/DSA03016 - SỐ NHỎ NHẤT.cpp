#include<bits/stdc++.h>
#define ll long long
using namespace std;
string ans(int s,int d)
{
//21 5 99201
//21 4 9921
//21 3 993
//18 4 9701
//18 2 99
//18 3 981
//19 3 991
//20 3 992
//18 5 98001
//17 3 971
//8  3 701
//8  2 71
//27 5 99801
//string str.size()=d and sum(str[i])=s
if(s>d*9) return "-1";
string res="";
if(d==2)
{
res+=to_string(s>9?9:(s-1))+to_string(s-(s>9?9:(s-1)));

}
else
{
int s2=(d-1)*9;
if(s<=s2)
{
int k=(s%9==0)?((s-1)/9):(s/9),h=s-k*9;
for(int i=1;i<=k;i++) res+="9";
res+=to_string(h-1);
for(int i=k+2;i<d;i++) res+="0";
res+="1";
}
else
{
for(int i=1;i<d;i++) res+="9";
res+=to_string(s%9==0?9:(s%9));
}
}
reverse(res.begin(),res.end());
return res;
}
int main()
{
int t,s,d;
cin>>t;
while(t--)
{
cin>>s>>d;
cout<<ans(s,d)<<endl;
}
}
