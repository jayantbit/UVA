//11466
#include<iostream>
#include<cmath>
using namespace std;

typedef  long long int ull;


int main()
{
    ull a,c,d,e;
 
 while(cin>>a && a)
 {
              if(a<0)a*=-1;
              d=0;e=1;
              for(c=2;c*c<a;c++)
              {
                    
                    if(a%c==0)
                    { d++;e=c;
                       while(a%c==0)a/=c;
                    } 
                    
              }
              if(a!=1){d++;e=a;}
              if(d<2)e=-1;
              cout<<e<<endl;              
  }  
 return 0;
}
