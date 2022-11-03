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
using namespace std;

int main()
{
int t,n,q,x;
cin>>t;
while(t--)
{
deque<int>que;
cin>>n;
while(n--)
{
cin>>q;
switch(q)
{
case 1:
	cout<<que.size()<<endl;
	break;
case 2:
	if(que.empty()) yes
	else no
	break;
case 6:
	if(que.empty()) puts("-1");
	else cout<<*(que.end()-1)<<endl;
	break;
case 4:
	if(!que.empty()) que.pop_front();
	break;
case 5:
	if(que.empty()) puts("-1");
	else cout<<que.front()<<endl;
	break;
default:
	cin>>x;
	que.push_back(x);
	break;
}
}
}
}
