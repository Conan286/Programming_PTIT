#include<bits/stdc++.h>
using namespace std;
//backtrack(n,a,b,c) nghia la chuyen n dia tu coc a sang coc c voi trung gian la coc b
void backtrack(int n,char a,char b,char c)
{
if(n==1) {
cout<<a<<" -> "<<c<<endl;
return ;
}
//chuyen n-1 dia tu coc a sang coc b voi trung gian la coc c
backtrack(n-1,a,c,b);
//chuyen 1 dia con lai tu coc a sang coc c voi trung gian la coc b
backtrack(1,a,b,c);
//chuyen n-1 dia tu coc b sang coc c voi trung gian la coc a
backtrack(n-1,b,a,c);
}
int main()
{
int n;
cin>>n;
backtrack(n,'A','B','C');
}
