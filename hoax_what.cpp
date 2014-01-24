#include<iostream>
#include<vector>
using namespace std;
vector <int> a(1000002);

int main()
{  unsigned long long int ans;
    int m,n,i,j,small,big;
    while(cin>>m && m)
    {
    small=1000000,big=ans=0;
    while(m--)
    {cin>>n;
    
    for(i=0;i<n;i++)
    {
                    cin>>j;a[j]++;
                    if(j>big){big=j;}
                    if(j<small){small=j;}
    }
                    if(big>small)
                    ans+=big-small;
                    a[big]--;
                    a[small]--;
                   for(;big>=0;big--)if(a[big])break;
                   for(;small<=1000001;small++)if(a[small])break;
    cout<<ans<<endl;
    }
   
  for(i=0;i<1000002;i++)a[i]=0;
}
    
    return 0;
}
    
