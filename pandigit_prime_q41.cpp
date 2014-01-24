using namespace std;

#include<algorithm>
#include<iostream>
#include<vector>
typedef unsigned long long int ull;
vector <int> v;

ull val()
{
int i,j=v.size();
ull v2=0;
for(i=0;i<j;i++)v2=v2*10+v[i];
return v2;
}


int isprime(ull n)
{ull j;
if(n%2==0)return 0;
for(j=3;j*j<=n;j+=2)
if(n%j==0)return 0;
return 1;
}


int main()
{

int i,j;
ull k,t;

for(i=7;i>=1;i--)v.push_back(i);



t=k=val();


if(isprime(k))cout<<k;
else {
do
{
prev_permutation(v.begin(),v.end());
k=val();
//cout<<k<<endl;
if(isprime(k)){cout<<k;break;}
}while(k!=t);
}

system("pause");
}
