#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<cctype>
using namespace std;
map <string,string> m;

int vowel(char ch)
{ if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')return 1;
return 0;
}

string plural(string s)
{int l=s.length()-1;
if(s[l]=='y' && !vowel(s[l-1]))return s.substr(0,l)+"ies";
if(s[l]=='o' || s[l]=='s' || s[l]=='x')return s.substr(0,l+1)+"es";
if(s[l]=='h' && (s[l-1]=='c' || s[l-1]=='s'))return s.substr(0,l+1)+"es";
return s.substr(0,l+1)+"s";
}

int main()
{
 string a,b;
 int n,t;
 cin>>n>>t;
 while(n-- && cin>>a>>b)m[a]=b; 
 n=t;
 while(n-- && cin>>a)
 {if(m[a]!="\0"){cout<<m[a]<<endl;continue;}
  cout<<plural(a)<<endl;
 }
 
 return 0;
}
        
