using namespace std;
#include<iostream>
#include<cmath>
#include<vector>
vector <int> v[4];
vector <int>::iterator it;

int digit(int n)
{if(n)return 1+digit(n/10);
return 0;
}

int fn(int n,int m)
{int d=m-digit(n)-!n;
while(d--)cout<<"0";
cout<<n<<endl;
}

int main()
{
    int i,j,a,b,c,n=0;
    for(i=2;i<=8;i+=2,n++)
    {
    j=(int)pow(10.0,i/2);

for(a=0;a<j;a++)
for(b=0;b<j;b++)
{c=a*j+b;
if((a+b)*(a+b)==c)v[n].push_back(c);
}
}

while(cin>>n)
{n=n/2 -1;
for(it=v[n].begin();it!=v[n].end();it++)fn(*it,(n+1)*2);
}




return 0;
}
