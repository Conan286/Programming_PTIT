#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
using namespace std;
struct ThiSinh{
    string name,birth;
    double a,b,c;
};
void nhap(ThiSinh &h)
{
//cin.ignore();
getline(cin,h.name);
cin>>h.birth>>h.a>>h.b>>h.c;
}
void in(ThiSinh &h)
{
double x=h.a+h.b+h.c;
cout<<h.name<<" "<<h.birth<<" "<<setprecision(1)<<fixed<<x;
}
    int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}


