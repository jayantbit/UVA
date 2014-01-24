#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<sstream>
#include<string>
#include <algorithm>
#include <vector>
using namespace std;
vector <int> a;
vector <int> ans;

void flip(int n)
{  ans.push_back(n);
     reverse(a.begin(),a.end()-(n-1));}

int sorted()
{int s=a.size(),i=0;
for(i=1;i<s;i++)
if(a[i]<a[i-1])return 0;
return 1;
}

int big(int n)
{
int s=a.size()-n,i=0,big=0,pos=0;
for(i=0;i<s;i++)
if(a[i]>big){big=a[i];pos=i;}
return pos;
}

void show(vector <int> v)
{ int s=v.size(),i;
for(i=0;i<s;i++)
{if(i)cout<<" ";
cout<<v[i];
}

}

int main()
{   string str;
    int i,s,k;
    while(getline(cin,str))
    { 
       
      stringstream in(str);
      while(in>>i)a.push_back(i);
      
      s=a.size();
      
      show(a);
      cout<<endl;
      for(i=0;i<s && !sorted();i++)
      { k=big(i);
        if(k)flip(s-k);
        flip(i+1);
      }
      s=ans.size();
      show(ans);
      if(s)cout<<" ";
      cout<<"0"<<endl;
      a.clear();
      ans.clear();
     }
     return 0;
}      

