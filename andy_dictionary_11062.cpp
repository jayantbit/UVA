using namespace std;
#include<cctype>
#include<iostream>
#include<string>
#include<set>
#include<cstdio>


set <string> s;
set <string>::iterator it;
string a;


void put()
{
s.insert(a);
a.clear();
}
/*
abc-
bcd
*/
int main()
{char ch;
int h=0;
while(cin.get(ch))
{
if(h==1 && ch=='\n'){h=0;continue;}

if(h==1 && ch!='\n')
{a.push_back('-');
if(ch=='-')h=1;else h=0;
}

if(ch=='-'){h=1;continue;}

if((ch!='\n' && !isalpha(ch)) ||  (!h && ch=='\n'))put();
if(isalpha(ch))
a.push_back(tolower(ch));
}


if(a.size())put();

for(it=s.begin();it!=s.end();it++)if((*it).size())cout<<*it<<endl;
return 0;
}
