/*
B21DCCN441
SỐ 0 VÀ SỐ 9

Bài làm tốt nhất
Cho số tự nhiên N. Hãy tìm số nguyên dương X nhỏ nhất được tạo bởi số 9 và số 0 chia hết cho N. Ví dụ với N = 5 ta sẽ tìm ra  X = 90.

Input:

Dòng đầu tiên ghi lại số lượng test T (T≤100).
Những dòng kế tiếp mỗi dòng ghi lại một test. Mỗi test là một số tự nhiên N được ghi trên một dòng (N≤100).
Output:

Đưa ra theo từng dòng số X nhỏ nhất chia hết cho N tìm được .
Ví dụ:

Input

Output

2

5

7

90

9009

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 65536 Kb
*/
#include<stack>
#include<deque>
#include<iostream>
#include<queue>
#include<cstring>
#include<algorithm>
#define run(t) int t; cin>>t; while(t--)
using namespace std;
bool check(string s,int k)
{
int n=s.length(), h=0;
for(int i=0;i<n;i++)
{
h=h*10+s[i]-'0';
h%=k;
}
return h==0;
}
string answer(int n)
{
stack<string>st;
deque <string>de;
int id=0;
de.push_front("9");
while(!check(de.back(),n))
{
string s=de.back();
string s1=s+"0",s2=s+"9";
if(check(s1,n)) return s1;
if(check(s2,n)) return s2;
de.pop_back();
de.push_front(s1);
de.push_front(s2);
}
return de.back();
}
int main()
{
int n;
run(t)
{
cin>>n;
cout<<answer(n)<<endl;
}
}
