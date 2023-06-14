#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main()
{
int t,n;

vector<string>v;
cin>>n;
int a[n],cnt=0;
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++){
int m=a[i],j=i-1;
while(a[j]>m&&j>=0){
 a[j+1]=a[j];
 j--;
}
a[j+1]=m;
string s="Buoc ";
s+=to_string(cnt++);
s+=": ";
for(int k=0;k<=i;k++){
s+=to_string(a[k])+" ";
}
v.push_back(s);
}
for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<"\n";
}

