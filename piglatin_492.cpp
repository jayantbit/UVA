#include<cstdio>
#include<cctype>
#include<iostream>
#include<string>
using namespace std;

int isvowel(char ch)
{ ch=tolower(ch);
if(ch=='a')return 1;
if(ch=='e')return 1;
if(ch=='i')return 1;
if(ch=='o')return 1;
if(ch=='u')return 1;
return 0;
}



void fn(string s)
{int i=0,j=s.length(),k=0;
 
if(!isvowel(s[i])){i++;k=1;}
 
for(;i<j;i++)cout<<s[i];
if(k)cout<<s[0];
 
cout<<"ay";
}


void code(string s)
{int i=0,j=s.length();
string word;

for(i=0;i<j;i++)
{
                if(isalpha(s[i]))word.push_back(s[i]);
                else 
                {
                if(word.size()){fn(word);word.clear();}
                cout<<s[i];
                }
}  
cout<<endl;
} 




int main()
{

string str;

while(getline(cin,str))
{
code(str);
} 

return 0;
}
