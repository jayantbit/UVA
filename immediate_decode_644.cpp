#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
using namespace std;

vector <string> v;



int main()
{
string s;
int i,j,k,l,m=1;
while(cin>>s)
{if(s[0]!='9')v.push_back(s);
else
{l=1;
k=v.size();
for(i=0;i<k && l;i++)
{l=1;
for(j=0;j<k;j++)
{if(i==j)continue;
if(v[j].compare(0,v[i].size(),v[i])==0){l=0;break;}
}
}
printf("Set %d is ",m);
if(l)cout<<"immediately decodable"<<endl;
else cout<<"not immediately decodable"<<endl;
m++;
v.clear();
}
}
return 0;
}
