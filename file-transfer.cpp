#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,a,b,k=0,l=0;
double d;
while(cin>>n && n)
{ b=k=0;
  cout<<"Output for data set "<<++l<<", "<<n<<" bytes:"<<endl;
  while(n>0)
  {
   k++;
   cin>>a;
   b+=a;
   n-=a;
   
   if(!(k%5))
   {cout<<"   Time remaining: ";
    
    if(!b)cout<<"stalled";
    else  
    {
     d=5*(double)n/(double)b;
     cout<<(int)(d +.9999999)<<" seaconds";
    }
    cout<<endl;
    b=0;
    }
    }  
 cout<<"Total time: "<<k<<" seconds"<<endl<<endl;
 }
 return 0;
}
