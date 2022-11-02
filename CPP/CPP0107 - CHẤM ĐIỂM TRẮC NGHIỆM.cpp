#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;
void solve(int id)
{
char id101[101]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
char id102[101]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

int count=0;
double p=0;
char a[101];
for(int i=0;i<15;i++) cin>>a[i];
switch(id)
{
case 101:
for(int i=0;i<15;i++) if(a[i]==id101[i])++count;
cout<<setprecision(2)<<fixed<<count*10/15.0<<endl;
break;
case 102:
for(int i=0;i<15;i++) if(a[i]==id102[i])++count;
cout<<setprecision(2)<<fixed<<count*10/15.0<<endl;
break;
}
}
main()
{
int t,id;
cin>>t;
while(t--)
{
cin>>id;
solve(id);
}
}

