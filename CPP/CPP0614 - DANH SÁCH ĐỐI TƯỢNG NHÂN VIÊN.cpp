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
int cnt=0;
class NhanVien{
private:
string name,id,gt,bd,add,tax,date;
public:
NhanVien()
{
this->name="";
this->id="";
this->bd="";
this->gt="";
this->add="";
this->tax="";
this->date="";
}
friend istream &operator>>(istream &is,NhanVien &a){
cnt++;
scanf("\n");
getline(is,a.name);
getline(is,a.gt);
getline(is,a.bd);
getline(is,a.add);
getline(is,a.tax);
getline(is,a.date);
//
if(cnt<10) a.id="0000"+to_string(cnt);
else a.id="000"+to_string(cnt);
return is;
}
friend ostream &operator<<(ostream &os,NhanVien &a)
{
cout<<a.id<<" "<<a.name<<" "<<a.gt<<" "<<a.bd<<" "<<a.add<<" "<<a.tax<<" "<<a.date<<endl;
return os;
}
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
