#include<iostream>
#include<cstdio>
using namespace std;


int fn(int n)
{int i,j=0;
for(i=1;i<=n/2;i++)if(n%i==0)j+=i;
return j;
}

int main()
{
    int n,j;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n && n)
    {printf("%5d  ",n);
    j=fn(n);
    if(j==n)cout<<"PERFECT";
    if(j<n)cout<<"DEFICIENT";
    if(j>n)cout<<"ABUNDANT";
    cout<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
    
    
