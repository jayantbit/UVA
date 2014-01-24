#include<iostream>
using namespace std;
int main()
{
 int n,m,i;
 unsigned long long int ans;
 while(cin>>n>>m &&(n+m))
 {
 
 cout<<n<<" things taken "<<m<<" at a time is ";
 ans=1;
 if(m>n/2)m=n-m;
 for(i=1;i<=m;i++)
 {ans*=n--;
 ans/=i;
 } 
 cout<<ans<<" exactly."<<endl;
}
return 0;
}
