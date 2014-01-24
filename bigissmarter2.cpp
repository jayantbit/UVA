#include<iostream>
#include<vector>

using namespace std;
struct ele
{ int w,iq,num;};
int main()
{ vector <ele> v;
ele temp;
int c=0;
while(cin>>temp.w>>temp.iq)
{temp.num=++c;
v.push_back(temp);
}
 

int i,j,k=v.size();

for(i=0;i<k-1;i++)
for(j=i+1;j<k;j++)
if(v[j].w<v[i].w || ( (v[j].w==v[i].w) &&(v[j].iq>v[i].iq)))
{
temp=v[i];
v[i]=v[j];
v[j]=temp;
}

for(i=0;i<k;i++)
 cout<<v[i].w<<" "<<v[i].iq<<endl;

int cur=1,pos=0,max=0;

vector <int> p;
vector <int> final;

int st;
for(i=0;i<k;i++)
{cur=1;st=i;
p.push_back(v[st].num);

for(j=i+1;j<k;j++)
{
if(v[j].w >v[st].w && v[j].iq<v[st].iq){st=j;cur++;p.push_back(v[st].num);}
}

if(cur>max){max=cur;final=p;}
p.clear();
}
k=final.size();
cout<<k<<endl;
for(i=0;i<k;i++)
cout<<final[i]<<endl;
return 0;
}
