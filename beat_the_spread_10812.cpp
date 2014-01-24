#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,n,c,d;
    
    cin>>n;
    while(n-- && cin>>a>>b)
    {
              d=a+b;
              if(d%2==0 && d<=2*a)
              {                     d/=2;
                                   c=max(d,a-d);
                                   cout<<c<<" "<<a-c;
                                   
              }
              else cout<<"impossible";
    cout<<endl;
   }
   return 0;
}
              
