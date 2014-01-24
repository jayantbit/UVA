#include<iostream>
#include<set>
#include<cstdio>
typedef long long int ull;
using namespace std;

multiset <ull> s;
multiset <ull>::iterator it;



void fn(ull k)
{
     printf("%lld = ",k);
if(k<0){k*=-1;printf("%d x ",-1);}
ull j;


while(k%2==0){k/=2;
              s.insert(2);
             }

for(j=3;j*j<=k;j+=2)
while(k%j==0){k/=j;
              s.insert(j);
             }
if(k!=1)s.insert(k);             
it=s.begin();
cout<<*it;
for(it++;it!=s.end();it++)printf(" x %lld",*it);

s.clear();
cout<<endl;
}



int main()
{
    ull n;
   while(cin>>n && n)fn(n);
   return 0;
}
