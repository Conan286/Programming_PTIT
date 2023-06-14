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
#define none puts("empty");
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
    char s[1001];
    stack<int>stk;

	 scanf("\n");
    while(scanf("\n%[^\n]s",&s)!=-1)
    {

        switch(s[1])
        {
		  case 'u':
		  	stk.push(k(s));
		  	break;
		  case 'o':
		  	if(!stk.empty()) stk.pop();
		  	break;
	  	  case 'h':
	  	  	if(stk.empty()) none
	  	  	else {
	  	  		stack<int>st;
	  	  		deque<int>de;
	  	  		st=stk;
	  	  		while(!st.empty()){
					de.push_back(st.top());
					st.pop();
					}
				reverse(de.begin(),de.end());
	  	  		while(!de.empty()){
				cout<<de.front()<<" ";
				de.pop_front();
			}
			cout<<endl;
		  	break;
		}
    }
}
    return 0;
}
