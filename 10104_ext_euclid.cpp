#include<iostream>
using namespace std;

int m,n,q;

/*
The extended Euclidean algorithm already guarantees that |X| + |Y| is minimal,
and that X <= Y after that, so you don't need to worry about those conditions.
http://en.wikipedia.org/wiki/Extended_Euclidean_algorithm
*/

void extgcd_r(int a,int b,int x=0,int lastx=1,int y=1,int lasty=0)
{
if(b)
{
q=a/b;
extgcd_r(b,a%b,lastx-q*x,x,lasty-q*y,y);
}
else cout<<lastx<<" "<<lasty<<" "<<m*lastx+n*lasty<<endl;
}

int main()
{
while(cin>>m>>n)
{
extgcd_r(m,n);
}
return 0;
}


