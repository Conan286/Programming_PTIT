/*
B21DCCN441
TỔNG GẦN NHẤT

Bài làm tốt nhất
Cho dãy số A[] có N số nguyên dương và số M.

Hãy chọn ra 3 số trong dãy A[] sao cho tổng 3 số đó nhỏ hơn M nhưng gần với M nhất.

In ra tổng 3 số tìm được.

Input

Dòng đầu ghi số bộ test (không quá 10)
Mối test có hai dòng. Dòng đầu ghi 2 số N và M (1 ≤ N ≤ 100; 10 ≤ M ≤ 300000). Dòng thứ 2 ghi N số của dãy số A[]. Các số đều nguyên dương và không quá 6 chữ số.
Input đảm bảo luôn có ít nhất một bộ ba số có tổng nhỏ hơn M.
Output

Mỗi test ghi giá trị tổng của 3 số tìm được trên một dòng.

Ví dụ

Input

Output

2

5 21

5 6 7 8 9

10 500

93 181 245 214 315 36 185 138 216 295

21

497

 

Giới hạn thời gian: 1s

Giới hạn bộ nhớ: 100000 Kb

*/






#include<bits/stdc++.h>
#define run(t) int t; cin>>t; while(t--)
using namespace std;
void inp(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
}
int out(int a[],int n,int m)
{
int ans=abs(a[0]+a[1]+a[2]-m),res=a[0]+a[1]+a[2];
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
for(int h=j+1;h<n;h++)
if(abs(a[i]+a[j]+a[h]-m)<ans and a[i]+a[j]+a[h]<=m)
res=a[i]+a[j]+a[h],ans=abs(a[i]+a[j]+a[h]-m);
return res;
}
int main()
{
int m,n;
run(t)
{
cin>>n>>m;
int a[n];
inp(a,n);
cout<<out(a,n,m)<<endl;
}
}
