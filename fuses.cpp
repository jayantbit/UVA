#include<iostream>
using namespace std;
int main()
{
    int n,m,c;
 
 int s,i,max,k,t=0;
 while(cin>>n>>m>>c && n+m+c)
 {max=0;
 int ar[20][2]={{0}};
 cout<<"Sequence "<<++t<<endl;
 
 for(i=0;i<n;i++)cin>>ar[i][0];
 s=0;
 for(i=0;i<m;i++)
 {cin>>k;
 if(!ar[k-1][1]){s+=ar[k-1][0];ar[k-1][1]=1;}
 else {s-=ar[k-1][0];ar[k-1][1]=0;}
 if(s>max)max=s;
 }
 if(max>c)cout<<"Fuse was blown.";
 else cout<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<max<<" amperes.";
 cout<<endl<<endl;
}
 return 0;
}
 
