#include<iostream>
#include<queue>
#include<cmath>
using namespace std;


int main()
{


int n;
cin>>n;
char ch;
int i,j,k,l=0;
int curro,currb;

while(l++<n)
{

queue <int> o;
queue <int> b;
queue <char> q;
cin>>j;
curro=currb=1;

while(j--)
{cin>>ch>>k;
if(ch=='O')o.push(k);
else b.push(k);
q.push(ch);
}

int s=0;
while(o.size() && b.size() )
{
s++;
if(curro<o.front() && currb<b.front()){curro++;currb++;}
else if(curro>o.front() && currb>b.front()){curro--;currb--;}
else if(curro<o.front() && currb>b.front()){curro++;currb--;}
else if(curro>o.front() && currb<b.front()){curro--;currb++;}


else if(curro==o.front() && currb<b.front() && q.front()=='O'){o.pop();q.pop();currb++;}
else if(curro==o.front() && currb>b.front() && q.front()=='O'){o.pop();q.pop();currb--;}


else if(curro==o.front() && currb<b.front() && q.front()!='O')currb++;
else if(curro==o.front() && currb>b.front() && q.front()!='O')currb--;


else if(curro<o.front() && currb==b.front() && q.front()=='B'){b.pop();q.pop();curro++;}
else if(curro>o.front() && currb==b.front() && q.front()=='B'){b.pop();q.pop();curro--;}

else if(curro<o.front() && currb==b.front() && q.front()!='B')curro++;
else if(curro>o.front() && currb==b.front() && q.front()!='B')curro--;

else if(curro==o.front() && currb==b.front() && q.front()=='B'){b.pop();q.pop();}

else if(curro==o.front() && currb==b.front() && q.front()=='O'){o.pop();q.pop();}

else if(curro==o.front() && currb==b.front() && q.empty())break;
//cout<<o.size()<<" "<<b.size()<<endl;
}

int temp;
while(o.size())
{
temp=o.front();
o.pop();
s+=abs((double)temp-curro)+1;
curro=temp;
}

while(b.size())
{
temp=b.front();
b.pop();
s+=abs((double)temp-currb)+1;
currb=temp;
}



cout<<"Case #"<<l<<": "<<s<<endl;
}

return 0;
}
