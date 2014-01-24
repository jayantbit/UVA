#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>

using namespace std;
typedef long long int ull;

ull m;
vector <int> v;
ull mod(ull x){
                if(x<0)return -x;
                return x;
               }

ull isodd(ull x){return mod(x)%2;};

bool fn(ull i,ull j)
{
ull x=mod(i)%m,y=mod(j)%m;
if(i<0)x*=-1;
if(j<0)y*=-1;
if(x<y)return true;
if(x!=y)return false;

if(isodd(j) && isodd(i)  && i>j)return true;
if(!isodd(j) && !isodd(i)  && i<j)return true;
if(isodd(i) && !isodd(j))return true;
return false;
}


int main()
{
ull a,j,i=0;

while(cin>>a>>m )
{cout<<a<<" "<<m<<endl;
if(!(a+m))break;

i=0;
while(i++<a){cin>>j;v.push_back(j);}

sort(v.begin(),v.end(),fn);
for (i=0;i<a;i++)cout <<v[i]<<endl;
v.clear();
}

return 0;
}


