#include<iostream>
#include <fstream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#define ll long long
#define N 10001
#define yes puts("YES");
#define no puts("NO");
using namespace std;
main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
fstream input,output;
input.open("PTIT.in",ios::in);
output.open("PTIT.out",ios::out);
string s;
while(getline(input,s))
output<<s<<endl;
}
