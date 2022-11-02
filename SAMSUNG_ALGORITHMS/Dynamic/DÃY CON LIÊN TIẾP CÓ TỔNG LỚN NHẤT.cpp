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
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<solve(a,n)<<endl;
    }
    return 0;
}
