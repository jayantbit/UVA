#include<iostream>
#include<set>
using namespace std;

multiset <int> num;
multiset <int>::iterator it;

int main()
{
     int n,k,t,i;
     cin>>t;
     while(t-- && cin>>n)
     { if(n<10){cout<<n<<endl;continue;}
       do
       {
       k=n;
       for(i=9;i>=2;i--)if(n%i==0){n/=i;num.insert(i);}
       if(n==k){cout<<"-1";n=-1;break;}
       }while(n>=10);
       
       if(n!=-1)
       for(it=num.begin();it!=num.end();it++)cout<<*it;
       
       if(n>1)cout<<n;
       
       cout<<endl;
       num.clear();
     }
return 0;
}
       
       
     
