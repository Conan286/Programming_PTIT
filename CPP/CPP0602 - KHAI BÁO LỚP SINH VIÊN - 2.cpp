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
using namespace std;
class SinhVien{
private:
string name,lop,bd,id;
double gpa;
public:
SinhVien()
{
this->name="";
this->id="B20DCCN001";
this->bd="";
this->lop="";
this->gpa=0;
}
friend istream &operator>>(istream &is,SinhVien &a){
getline(is,a.name);
getline(is,a.lop);
getline(is,a.bd);
cin>>a.gpa;
if(a.bd[1]=='/') a.bd="0"+a.bd;
if(a.bd[4]=='/') a.bd.insert(3,"0");
return is;
}
friend ostream &operator<<(ostream &os,SinhVien &a)
{
cout<<a.id<<" "<<a.name<<" "<<a.lop<<" "<<a.bd<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
return os;
}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

