#include<iostream>
using namespace std;

typedef long long int ull;

ull n,c1,n1,c2,n2;

ull gcd(ull a,ull b)
{if(!b)return a;
return gcd(b,a%b);
}

ull mod(ull x)
{if(x<0)return -x;
return x;
}


/*
43
1 3
2 4
*/

void solve(ull a,ull b,ull c,ull q=0)
{


ull x,y,t,l;
t=gcd(mod(a),mod(b));
if(c%t){cout<<"failed"<<endl;return;}

a/=t;b/=t;c/=t;


if(b>0)
{
for(x=0;;x++)
{t=c-a*x;
if(t%b==0){y=t/b;break;}
}
}

else {
for(x=c/a;;x++)
{t=a*x-c;
if(t%b==0){y=t/mod(b);break;}
}
}

if(q)x=(x-c2*y)/c1;

if(x<0 || y<0){cout<<"failed"<<endl;return;}

cout<<x<<" "<<y;
cout<<endl;
}


int main()
{
ull a,b;


while(cin>>n && n)
{cin>>c1>>n1>>c2>>n2;
a=c1*n2-c2*n1;b=n*c1;
if(!a)solve(n1,n2,n);
else solve(n1,a,b,1);
}



return 0;
}

