#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
   unsigned char ch;
    string s;
    int i,j;
    while(cin>>s)
    {j=s.length();
     for(i=0;i<j;i++)
     {ch=s[i];
      if(ch<7)ch+=256;
      ch-=7;
      cout<<ch;
     }
    cout<<endl;
}
    return 0;
}
