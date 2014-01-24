//101093

#include<iostream>
#include<string>
#include<cmath>
#include<sstream>
using namespace std;

typedef unsigned long long int ull;

ull gcd(ull a,ull b)
{
    if(!b)return a;
    return gcd(b,a%b);

}

int main()
{ ull a,b,p,c;
string x,y;
int m,n,d,e=1;
cin>>d;
while(d-- && cin>>x>>y)
{

m=x.length()-1;
n=y.length()-1;
a=b=c=0;p=1;


cout<<"Pair #"<<e++<<": ";

while(m>=0){a+=p*(x[m]-'0');p*=2;m--;}
p=1;
while(n>=0){b+=p*(y[n]-'0');p*=2;n--;}



c=!(gcd(a,b)-1);

if(c)cout<<"Love is not all you need!"; else cout<<"All you need is love!";
 
cout<<endl;
}
return 0;
}
