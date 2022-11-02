#include<bits/stdc++.h>
#define yes puts("YES");
#define no puts("NO");
#define ll long long
using namespace std;
bool check(string s)
{
stack<char>st;
int n=s.size();
for(auto x:s)
   {
    if(x=='(' or x=='{' or  x=='[')   st.push(x);
    else {
	//neu ngan xep rong hoac ( x khong phai ki tu (dong ngoac) va phan tu tren cung ngan xep la (mo ngoac)) thi day ngoac do sai,tra ve 0
    if (st.size()==0 or (x != '}' and st.top() == '{') or (x != ']' and st.top() == '[') or (x != ')' and st.top() == '(')  ) return 0;
    //nguoc lai thi loai phan tu tren cung ra khoi ngan xep
    st.pop();
         }
    }
    return st.size()==0;
}
int main()
{
int t;
string s;
cin>>t;
while(t--){
cin>>s;
if(check(s)) yes
else no
}
}


