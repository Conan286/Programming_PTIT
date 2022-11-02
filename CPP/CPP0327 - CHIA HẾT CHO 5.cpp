#include<iostream>
#include <fstream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include <iomanip> 
#define ll long long
#define yes puts("Yes");
#define no puts("No");
using namespace std;
//quy luat
//x%4=0->1
//x%4=1->2
//x%4=2->4
//x%4=3->3     
//2^0%5=1
//2^1%5=2
//2^2%5=4
//2^3%5=3
//2^4%5=1
//2^5%5=2
//2^6%5=4
//2^7%5=3
//2^8%5=1
//1010
//n=4
//i=3->0
//1111
//0123
int quyluat[5]={1,2,4,3};
bool check(string s){
int n=s.size(),sum=0;
for(int i=n-1;i>=0;i--){
if(s[i]=='1'){
 sum+=quyluat[(n-i-1)%4];
 sum=sum%5;
 }
else continue;
}
return sum%5==0;
}
main()
{
int t;
cin>>t;
string s;
while(t--)
{
cin>>s;
if(check(s)) yes
else no
}
}

