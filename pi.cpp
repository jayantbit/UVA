#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int num[50]={0};
int gcd(int a,int b)
{if(b==0)return a;
return gcd(b,a%b);
}

int main()
{
    int n,i,j,k;
    double d;
    while(cin>>n && n)
    {
    k=0;
    for(i=0;i<n;i++)
    cin>>num[i];
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(gcd(num[i],num[j])==1)k++;
    if(k)
    {
    d=(double)(3*n*(n-1))/k;
    d=sqrt(d);
    printf("%6lf",d);
    }
    else cout<<"No estimate for this data set.";
    cout<<endl;
    }
    return 0;
}
    
