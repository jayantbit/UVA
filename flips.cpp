#include<iostream>
#include<vector>
using namespace std;

vector <long long  int> v;
vector <long long  int>:: iterator it;


int main()
{
   long long  int t,n,k,f,c=1,j,a;
   
   cin>>t;
   while(t--)
   {         
             cin>>n>>k;
             cout<<"case "<<c<<" :";
             f=1;
             for(a=j=1;a<=n;j*=2,a++)
             {
             if( int(k/j)%2)v.push_back(a);
             else f=0;
             }
             
             a=0;
             
             for(it=v.begin();it!=v.end();it++)
             {cout<<" ";
             cout<<*it;
             a++;
             }
             cout<<endl;
             if(f)cout<<"YES";
             else cout<<"NO";
             cout<<endl;
             v.clear();
             c++;
   }
   
   return 0;
}
             
             
   
   
