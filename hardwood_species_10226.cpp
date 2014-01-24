#include<iostream>
#include<string>
#include<map>
#include<cstdio>
using namespace std;

map <string,double> m;
map <string,double>::iterator it;

int c=0,t;

void fn()
{t--;
string s;
for(it=m.begin();it!=m.end();it++)
{s=(*it).first;
cout<<s<<" ";
//printf("\n");
printf("%0.4lf\n",100.0*(*it).second/c);
}
m.clear();
c=0;
if(t)printf("\n");
}


int main()
{
string s;
int i,k=0;
scanf("%d",&t);getchar();



while(getline(cin,s))
{
if(!s.empty())
{
m[s]++;
c++;
}
else k++;
if(k==2){k=1;fn();}
}
if(m.size())fn();

return 0;
}


