#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
int n,i;
string s,str,s2;
char ch;
while(getline(cin,str))
{stringstream t2(str);
t2>>n>>s2;
i=0;
if(!n)break;
n=s2.length()/n;
stringstream t(s2);
while(t>>ch)
{s.push_back(ch);
i++;
if(i==n)
{
reverse(s.begin(),s.end());
cout<<s;
s.clear();
i=0;
}
}
cout<<endl;
}
return 0;
}
