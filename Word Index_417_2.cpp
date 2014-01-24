#include<iostream>
#include<map>
#include<string>
using namespace std;
 
map <string,int> mp;
int cnt=0;
 
void fn(string p,char st,int t)
{    char ch;
     if(t==1)for(ch=st;ch<='z';ch++){
                                     mp[p+ch]=++cnt;
                                     }
     else
     for(ch=st;ch<='z';ch++)fn(p+ch,ch+1,t-1);
}
 

int check(string str)
{
    int i=0,j=str.length();
    for(i=1;i<j;i++)
    if(str[i]<=str[i-1])return 0;
    return 1;
}


int main()
{
   
    fn("",'a',1);fn("",'a',2);fn("",'a',3);fn("",'a',4);fn("",'a',5);
    string s;
    while(cin>>s)
    if(!check(s))cout<<"0\n";
    else cout<<mp[s]<<endl;
    
    return 0;
    
}
