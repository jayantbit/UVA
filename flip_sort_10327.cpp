#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> v;
int main()
{
int n,i,j,k,l=0;

while(cin>>n)
{v.clear();k=0;
//if(l)cout<<endl;
for(i=0;i<n;i++){cin>>j;v.push_back(j);}

for(i=0;i<n;i++)
for(j=0;j<n-1;j++)
if(v[j+1]<v[j]){swap(v[j],v[j+1]);k++;}
cout<<"Minimum exchange operations : "<<k<<endl;
l++;
}
}


