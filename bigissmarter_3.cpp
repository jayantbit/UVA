#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

struct ele
{
int w,iq,id;
}temp;

vector <ele> v;


void show(vector <ele> v)
{ int s=v.size(),i;
for(i=0;i<s;i++)
{if(i)cout<<" ";
cout<<v[i].iq<<" "<<v[i].w<<endl;;
}
}

/*
 First, sort the elephants based on their decreasing IQ, then apply LIS based on their increasing weight to these elephants
*/
bool fn(ele a,ele b)
{
if(b.iq<a.iq)return true;
if(b.iq==a.iq && b.w>a.w)return true;
return false;
}

void LIS(vector <ele> a)
{
    int n=a.size(),k,i,j,pre=-1,cur=0;

    vector <int> l(n);
    vector <int> p;

    l[0]=1;k=0;

    for(i=1;i<n;i++)
    {
    for(j=k=0;j<i;j++)if(a[j].iq>a[i].iq  && l[j]>k)
      { k=l[j];cur=a[j].id;}

     if(pre!=cur && cur)p.push_back(cur);
    pre=cur;
   l[i]=k+1;
    }

    k=0;
    for(i=0;i<n;k=max(k,l[i]),i++);


if(p.size()!=k)p.push_back(a[n-1].id);

cout<<k<<endl;
for(i=0;i<p.size();i++)cout<<p[i]<<endl;


}

int main()
{
int i=0,j;
while(cin>>temp.w>>temp.iq)

{temp.id=++i;
v.push_back(temp);
}
sort(v.begin(),v.end(),fn);

//show(v);

LIS(v);
getchar();
return 0;
}
