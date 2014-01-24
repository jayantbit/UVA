#include<iostream>
using namespace std;


int fn(int n,int k)
{ if(n/k)
return n/k +fn(n/k,k);
return 0;
}


int gn(int n,int m)
{
    int i,j,k;

    for(i=2;i*i<=m;i++)
    {k=0;
    while(m%i==0){m/=i;k++;}
    if(k && fn(n,i)<k)return 0;
    }
    
    if(m!=1 && fn(n,m)<1)return 0;
    return 1;
}

int main()
{int n,m;
while(cin>>n>>m)
{
                cout<<m<<" ";
                if(gn(n,m))cout<<"divides ";
                else cout<<"does not divide ";
                cout<<n<<"!"<<endl;
}

    return 0;
    
}
