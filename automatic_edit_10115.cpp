#include<vector>
#include<string>
#include<iostream>
#include<cstdio>
using namespace std;

vector <string> fnd;
vector <string> rpl;
string text;

int rep(int n)
{int k=text.size(),i,j=fnd[n].size();
for(i=0;i<=k-j;i++)
if(text.compare(i,j,fnd[n])==0)
{text=text.substr(0,i)+rpl[n]+text.substr(i+j);
return 1;
}
return 0;
}


void fn()
{int i=0,j=fnd.size();
for(i=0;i<j;i++)
while(rep(i));

}

int main()
{
string str;
int n,i;
do
{
cin>>n;
if(!n)break;
getchar();
for(i=0;i<n;i++)
{
getline(cin,str);
fnd.push_back(str);
getline(cin,str);
rpl.push_back(str);
}
getline(cin,text);
fn();
cout<<text<<endl;
fnd.clear();
rpl.clear();
}while(1);
return 0;
}
