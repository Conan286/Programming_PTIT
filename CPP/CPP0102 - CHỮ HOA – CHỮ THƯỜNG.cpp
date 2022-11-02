#include<bits/stdc++.h>
#define ll long long
using namespace std;
char res(char x)
{
return (x>='A'&&x<='Z')?(x+=32):(x-=32);
}
main()
{
int t;
char x;
cin>>t;
while(t--)
{
cin>>x;
cout<<res(x)<<endl;
}
}

