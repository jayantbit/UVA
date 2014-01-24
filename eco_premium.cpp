#include<iostream>
using namespace std;
int main()
{
    int t,n,a,b,c,s;
    cin>>t;
    while(t--)
    {s=0;
    cin>>n;
    while(n--)
    {cin>>a>>b>>c;
     s+=a*c;
    }
    cout<<s<<endl;
    }
    return 0;
}
