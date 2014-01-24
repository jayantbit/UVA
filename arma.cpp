using namespace std;
#include<map>
#include<iostream>
#include<string>
#include<sstream>
#include<cstdio>
typedef long long int ull;


map <ull,int> m;
map <ull,int>::iterator it;

int main()
{
string str;
ull n;
int k=1,l,f;
while(getline(cin,str))
{l=0;
                       
                       stringstream s(str);
                       while(s>>n){m[n]++;l++;}
                       
                       getline(cin,str);
                       stringstream s2(str);
                       while(s2>>n){m[n]++;l++;if(m[n]==2)l-=2;}
                       
                       printf("Judgement #%d: %d\n",k,l);
                       
                       f=0;
                       for(it=m.begin();it!=m.end();it++)
                       if((*it).second==1)
                       { if(f)cout<<" ";
                         cout<<(*it).first;
                         f++;
                       }
m.clear();
cout<<endl;
k++;
}

return 0;
}
                         
                       
                       
                       
                       
                       

