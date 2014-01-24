#include<cstdio>
#include<iostream>
using namespace std;


int main()
{
    char s[17]={0};
    
    int i,j;
    
    
   
    for(i=0;i<4;i++)
    { for(j=i*4;j<i*4 +4;j++)scanf("%c",&s[j]);
    getchar();
    }
    
    cout<<endl;
    for(i=0;i<16;i++)cout<<s[i];
    cout<<endl;
    system("pause");
}
