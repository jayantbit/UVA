#include<iostream>
using namespace std;

int main()
{
    int n,t,p,i,j=1,k;
    cin>>t;
    double sum;
    while(t-- && cin>>n>>k)
    {sum=0;
    
    int age[101]={0};
    while(n--){cin>>p;age[p]++;}
    
    for(i=0;i<=100-k;i++)sum+=age[i]*age[i+k];
    cout<<"Case #"<<j++<<": "<<sum<<endl; 
    }
    
    return 0;
}         
