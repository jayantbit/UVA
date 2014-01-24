#include<iostream>
#include<vector>
using namespace std;
vector <int> ar;

int main()
{
    int t,n,i,swap,j,k;
     cin>>t;
    while(t--)
  {      
    cin>>n;
    swap=0;
    for(i=0;i<n;i++)
    {cin>>j;
    ar.push_back(j);
    }
    
    for(i=1;i<=n;i++)
    {k=ar.size();
     for(j=0;j<k;j++)
     if(ar[j]==i)
     {swap+=j;
     ar.erase(ar.begin()+j);
     break;
     }
    }
   cout<<"Optimal train swapping takes "<<swap<<" swaps."<<endl;
   ar.clear();
} 
   return 0;
}  
