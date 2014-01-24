#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;



void print_LIS(vector <int> a)
{
    int n=a.size(),k,i,j,t,ans=0;

    vector <int> l(n);
    vector <int> p;

    l[0]=1;k=0;

    for(i=1;i<n;i++)
    {
    for(j=k=0;j<i;j++)if(a[j]<a[i] && l[j]>k)k=l[j];
    l[i]=k+1;  
    ans=max(l[i],ans);
    }  
      
      for(i=0;i<n;i++)cout<<l[i]<<" ";
      cout<<endl;
      t=ans;

      for(i=n-1;i>=0 && ans>0;i--)
      if(l[i]==ans){p.push_back(a[i]);ans--;}

      reverse(p.begin(),p.end());

      for(i=0;i<t;i++)cout<<p[i]<<" ";


}


int main()
{
    int ar[]={8,5,6,7,1,2,3,2,1,1,2,4,5,1,2,3};
    vector <int> v(ar,ar+16);
    print_LIS(v);
    getchar();
}
    
