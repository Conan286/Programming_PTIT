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
#define no puts("NONE");
using namespace std;

int main()
{
int t,n,q,x;
string s;
cin>>t;
deque<int>que;
while(t--)
{
cin>>s;
switch(s[1])
{
case 'U':
	cin>>n;
	que.push_back(n);
	break;
case 'O':
	if(!que.empty()) que.pop_front();
	break;
case 'R':
	if(que.empty()) no
	else cout<<que.front()<<endl;
	break;
}
}
}
