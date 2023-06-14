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
int t,x;
string s;
cin>>t;
deque<int>que;
while(t--)
{
cin>>s;
if(s== "PUSHFRONT"){
	cin>>x;
	que.push_front(x);
}
else if(s== "PRINTFRONT"){
	if(que.empty()) no
	else cout<<que.front()<<endl;
}
else if(s=="POPFRONT"){
	if(!que.empty()) que.pop_front();
}
else if(s== "PUSHBACK"){
	cin>>x;
	que.push_back(x);
}
else if(s== "PRINTBACK"){
	if(que.empty()) no
	else cout<<*(que.end()-1)<<endl;
}
else{
	if(!que.empty()) que.pop_back();
    }
}
}

