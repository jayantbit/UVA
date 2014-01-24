#include<iostream>
using namespace std;
int main()
{
    int iq[10001]={0};
    int a,b,c;
    while(cin>>a>>b)iq[a]=b;
    
    a=b=0;
    for(a=1;a<10000;a++)
    if(
