#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int l,num,k;
    while(cin>>s && (s[0]-48))
    {
    l=s.length();
    num=0;
    k=1;
    while(--l>=0)
    num+=((int)s[l]-48)*( (1<<k++)-1);
    cout<<num<<endl;
    }
    return 0;
}             
    
