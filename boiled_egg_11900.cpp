#include<iostream>
using namespace std;


int main()
{
    
    int n,p,q,t,i,j,k=1;
    cin>>t;
    while(k<=t)
    {
              cin>>n>>p>>q;
              int a[30]={0};
              
              for(i=0;i<n;i++)cin>>a[i];
              
              if(n<p)p=n;
              for(i=0,j=0;i<p;i++)
              {j+=a[i];
              if(j>q)break;
              }
              
              cout<<"Case "<<k++<<": "<<i<<endl;
    }
    return 0;
}        
              
