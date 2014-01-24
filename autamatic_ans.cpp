#include<iostream>
using namespace std;
int main()
{
    long long int i=0;
    int j;
    cin>>j;
    while(j-- && cin>>i)
    {i*=567;
    i/=9;
    i+=7492;
    i*=235;
    i/=47;
    i-=498;
    i%=100;
    i/=10;
    if(i<0)i*=-1;
    cout<<i<<endl;
    }
    return 0;
}
