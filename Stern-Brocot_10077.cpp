using namespace std;
#include<iostream>

class num
{public:
int n;
int d;

void set(int a,int b){n=a;d=b;}
num(){set(0,0);}

int compare(int a,int b)
{int dd=a*d-b*n;
if(dd>0)return 1;
if(dd==0)return 0;
return -1;
}
};


int main()
{
int x,y,z;
num l,r,m,t;

while(cin>>x>>y && !(x==1 && y==1))
{
l.set(0,1);r.set(1,0);m.set(1,1);
while(z=m.compare(x,y))
{
if(z>0)
{cout<<"R";
t.set(m.n+r.n,m.d+r.d);
l=m;
m=t;
}
else
{cout<<"L";
t.set(m.n+l.n,m.d+l.d);
r=m;
m=t;
}
}

cout<<endl;
}
return 0;
}


