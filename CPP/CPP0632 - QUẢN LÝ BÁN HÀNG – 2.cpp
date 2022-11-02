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
#include<string.h>
#define ll long long
#define li long int
#define vll vector<long long>
#define vs vector<string>
#define vb vector<bool>
#define mps map<string,int>
#define yes puts("YES");
#define no puts("NO");
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define cin(a,b,c,d) cin>>a>>b>>c>>d;
int cnt=0,cnt1=0,cnt2=0;
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;
map<string,KhachHang>K;
map<string,MatHang>M;
class KhachHang{
public:
	string id,name,gt,birth,dc;
public:
	friend class HoaDon;
KhachHang()
{
this->id="KH";
this->name="";
this->gt="";
this->birth="";
this->dc="";

}
friend istream &operator >>(istream &is,KhachHang &a)
{
scanf("\n");
getline(is,a.name);
getline(is,a.gt);
getline(is,a.birth);
getline(is,a.dc);
++cnt;
string s=to_string(cnt);
while(s.size()<3  ) s.insert(0,"0");
a.id+=s;
K[a.id]=a;
return is;
}
};
class MatHang{
public:
string mmh,ten,dvt;
ll gm,gb;
public:
	friend class HoaDon;
	MatHang()
	{
	 this->mmh="MH";
	 this->gb=0;
	 this->gm=0;
	 this->ten="";
	 this->dvt="";
	}
friend istream &operator>>(istream &is,MatHang &a)
{
	scanf("\n");
	getline(is,a.ten);
	getline(is,a.dvt);
	is>>a.gm;
	is>>a.gb;
	++cnt1;
	string s=to_string(cnt1);
	while(s.length()<3) s.insert(0,"0");
	a.mmh+=s;
	M[a.mmh]=a;
	return is;
}
};



class HoaDon{
public:
	string idkh,idmh,idhd;
	int sl;
	ll ln,tt;
public:

	HoaDon(){
	 this->idhd="HD";
	 this->sl=0;
	 this->idmh="";
	 this->idkh="";
	}
	public:
		friend istream &operator>>(istream &is,HoaDon &a)
		{
		   scanf("\n");
			is>>a.idkh>>a.idmh>>a.sl;
			++cnt2;
			string s=to_string(cnt2);
			while(s.size()<3) s.insert(0,"0");
			a.idhd+=s;
			a.tt=M[a.idmh].gb*a.sl;
			a.ln=(M[a.idmh].gb-M[a.idmh].gm)*a.sl;
		   return is;
		}
  friend ostream &operator<<(ostream &os,HoaDon &a)
  {
   cout<<a.idhd<<" "<<K[a.idkh].name<<" "<<K[a.idkh].dc<<" "<<M[a.idmh].ten<<" "<<a.sl<<" "<<a.tt<<" "<<a.ln<<endl;
   return os;
  }
};
bool cmp(HoaDon a,HoaDon b)
{
if(a.ln!=b.ln) return a.ln>b.ln;
return a.idhd<b.idhd;
}
void sapxep(HoaDon x[],int n){
	sort(x,x+n,cmp);
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
