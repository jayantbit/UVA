#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<bitset>
#include<map>
#include<set>
#include<climits>
#include<algorithm>
#include<utility>
#include<cstdlib>
#include<cctype>
#include<queue>
#include<sstream>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define assign(x,n) x=(int*)calloc(n,4)
#define rep(i,n) for(i=1;i<=n;++i)
typedef  long long int ull;
using namespace std;
typedef  pair<int,int> pr;

vector <string> v;
bool comp(string a,string b){return a.compare(b)<=0;}

int fn(string a,string b)
{
    int count1[256]={0};
    int count2[256]={0};
    int l=a.length(),i;
    for(i=0;i<l;i++)if(a[i]!=' ')count1[a[i]]++;
    l=b.length();
    for(i=0;i<l;i++)if(b[i]!=' ')count2[b[i]]++;
    for(i=0;i<256;i++)
    if(count1[i]!=count2[i])return 0;
    return 1;
}



int main()
{
int t,i,j,k,n;
string s1,s2;
cin>>t;
getchar();
getline(cin,s1);

while(t--)
{
while(getline(cin,s1) && s1.length()>0)v.push_back(s1);
sort(v.begin(),v.end(),comp);
n=v.size();

for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(fn(v[i],v[j]))cout<<v[i]<<" = "<<v[j]<<endl;

if(t)cout<<endl; 
v.clear();                 
}


 
return 0;
}
