#include<iostream>
#include<map>
#include<deque>
#include<string>
using namespace std;
map<int,int> m;
deque <int> q[1000];

int main()
{
    int a,b,c,d=0,i,j;
    string str;
    
    while(cin>>a && a)
    {d++;
    cout<<"Scenario #"<<d<<endl;
    for(i=0;i<a;i++)
    {cin>>b;
    for(j=0;j<b;j++)
    {cin>>c;
     m[c]=i+1;
    
    }
    }
    
    while(cin>>str && str.compare("STOP"))
    {if(!str.compare("ENQUEUE"))
     {cin>>b;
     c=m[b];
     if(c)q[c-1].push_back(b);
     else q[a].push_back(b);
     }
    else  if(!str.compare("DEQUEUE"))
     {for(i=0;i<=a;i++)
     if(q[i].size())break;
     cout<<q[i].front()<<endl;
     q[i].pop_front();
     }
    }
    for(i=0;i<=a;i++)q[i].clear();
     m.clear();
     cout<<endl;
     }
    
    return 0;
}
     
                   
    
