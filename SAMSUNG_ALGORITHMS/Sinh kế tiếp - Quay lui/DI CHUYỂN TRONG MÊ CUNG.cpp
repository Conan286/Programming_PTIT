/*
B21DCCN441
Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A[N][N]. Một con chuột đi từ ô đầu tiên góc trái (A[0][0]) đến ô cuối cùng góc phải (A[N-1][N-1]) theo nguyên tắc:

Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.
Left (L): Chuột được phép sang trái dưới nếu ô bên trái nó có giá trị 1.
Up (U): Chuột được phép lên trên nếu ô trên nó có giá trị 1.
Hãy đưa ra tất cả các hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là kích cỡ của mê cung; dòng tiếp theo đưa vào ma trận nhị phân A[N][N].
T, N, A[i][j] thỏa mãn ràng buộc: 1≤T ≤10; 2≤N≤8; 0≤A[i][j] ≤1.
Output:

Đưa ra các xâu ký tự được sắp xếp, trong đó mỗi xâu là một đường đi của con chuột trong mê cung. In ra đáp án theo thứ tự từ điển. Đưa ra -1 nếu chuột không đi được đến đích.
Input

Output

3
4
1 0 0 0

1 1 0 1

0 1 0 0

0 1 1 1
4
1 0 0 0

1 1 0 1

1 1 0 0

0 1 1 1

5

1 0 0 0 0

1 1 1 1 1

1 1 1 0 1

0 0 0 0 1

0 0 0 0 1

DRDDRR

DDRDRR DRDDRR

DDRRURRDDD DDRURRRDDD DRDRURRDDD DRRRRDDD

 

 

 

Giới hạn thời gian: 2s

Giới hạn bộ nhớ: 65536 Kb
*/
#include<iostream>
#include<cstring>
#include<map>
#include <iomanip>
#include<vector>
#include<algorithm>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define run(t) cin>>t; while(t--)
#define N 101
using namespace std;
int n;
int a[N][N],ok[N][N];
vector<string>v;
void nhap()
{
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++){
cin>>a[i][j];
ok[i][j]=1;
}
}
void Try(int i,int j,string s)
{
if(!a[1][1] or !a[n][n] ) return;
if(i==n and j==n) v.push_back(s);
if(i<n and a[i+1][j] and ok[i+1][j])
{
ok[i][j]=0;
Try(i+1,j,s+"D");
ok[i][j]=1;
}
if(j<n and a[i][j+1] and ok[i][j+1])
{
ok[i][j]=0;
Try(i,j+1,s+"R");
ok[i][j]=1;
}
if(i>1 and a[i-1][j] and ok[i-1][j])
{
ok[i][j]=0;
Try(i-1,j,s+"U");
ok[i][j]=1;
}
if(j>1 and a[i][j-1] and ok[i][j-1])
{
ok[i][j]=0;
Try(i,j-1,s+"L");
ok[i][j]=1;
}


}
int main()
{
int t;
run(t)
{
v.clear();
cin>>n;
nhap();
Try(1,1,"");
if(!v.size()) puts("-1");
else{
sort(v.begin(),v.end());
for(auto x:v)
cout<<x<<" ";
cout<<endl;
}
}
}
