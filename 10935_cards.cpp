#include<iostream>
#include<queue>
using namespace std;

queue <int> a,b;
 
void set(int n)
{int i=1;
for(i=1;i<=n;i++)
a.push(i);
}

void fn()
{int k,i;
while(a.size()!=1)
{k=a.front();
a.pop();
b.push(k);
k=a.front();
a.pop();
a.push(k);
}
cout<<"Discarded cards:";
k=b.size();
for(i=0;i<k;i++,b.pop())
{
if(i)cout<<",";
cout<<" "<<b.front();
}
cout<<endl;
cout<<"Remaining card: ";
cout<<a.front();
a.pop();
cout<<endl;
}

int main()
{
int n;
while(cin>>n && n)
{set(n);fn();}
return 0;
}
