#include<iostream>
#include<string>
#include<sstream>
#include<cstdio>
using namespace std;
typedef  long  double ull;

ull l2=2147483647.0,l1=-2147483648.0;


int invalid(ull a)
{ 
    if( a>l2)return 1;
return 0;
}



int main()
{
    ull a,b;
    char ch;
    int k=0;
    string s;
    
    while(getline(cin,s))
    {
    cout<<s<<endl;
    stringstream (s)>>a>>ch>>b;
    
    if(invalid(a))cout<<"first number too big"<<endl;
    if(invalid(b))cout<<"second number too big"<<endl;
    if(ch=='+')a+=b;
    if(ch=='*')a*=b;
    if(invalid(a))cout<<"result too big"<<endl;
           
    
    }
    return 0;
}
    
    
