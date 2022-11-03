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

#define yes puts("Yes");
#define none puts("NONE");
using namespace std;

int solve(int a[],int n)
{
	int pre=0,cur=0;
	for(int i=0;i<n;i++)
	{
	 pre+=a[i];
	 if(pre<0) pre=0;
	 else if(pre>cur) cur=pre;
	}
	return cur;
}
int k(string s)
{
int n=s.size(),a=0;
for(int i=5;i<n;i++)
a=a*10+s[i]-'0';
return a;
}
int main()
{
    int t,n,q;
    string s;
    stack<int>stk;
    cin>>q;

    while(q--)
    {
    	scanf("\n");
        getline(cin,s);
        switch(s[1])
        {
		  case 'U':
		  	stk.push(k(s));
		  	break;
		  case 'O':
		  	if(!stk.empty()) stk.pop();
		  	break;
	  	  case 'R':
	  	  	if(stk.empty()) none
	  	  	else cout<<stk.top()<<endl;
		  	break;
		}
    }
    return 0;
}
