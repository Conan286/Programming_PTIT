#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include<iomanip>
#define ll long long

#define yes puts("YES");
#define no puts("NO");
#define k 1000000007
using namespace std;

string binary(int n)
{
string s="";
stack<int>st;
while(n)
{
st.push(n%2);
n=n/2;
}
while(!st.empty()){
 s+=to_string(st.top());
 st.pop();
}
return s;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        cout<<binary(i)<<" ";
        cout<<endl;
    }
    return 0;
}
