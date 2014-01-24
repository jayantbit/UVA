//10340

#include<iostream>
#include<string>
using namespace std;
string a,b;
int main()
{
    
  
  int i,j,k,l,m,n;
  while(cin>>a>>b)  // find if a is a subsequence of b
  {
  j=0;l=b.length();m=1;n=a.length();
  
  for(i=0;i<n;i++)
  {
                  k=0;
                  for(;j<l;j++)
                  if(a[i]==b[j]){k=1;j++;break;}
                  if(!k){cout<<"No"<<endl;m=0;break;}
  }
  if(m)cout<<"Yes"<<endl;
 
 }
  
  return 0; 
}
  
