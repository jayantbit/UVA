#include<iostream>
#include<vector>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;

vector <int> v;

int avg,penny,n;



double fn()
{ 
int i=0,j,k=0,l,d,e;
for(j=n-1;j>i;j--)
{ 
                  l=avg;
                  if(penny){l++;penny--;}
                  if(v[j]>l){d=v[j]-l;v[j]=l;}
                  k+=d;
                  while(d)
                          { l=avg;
                            if(penny)l++;
                            if(v[i]<l)
                                        {
                                        e=min(l-v[i],d);
                                        v[i]+=e;
                                        d-=e;
                                        }
          
                            else {i++;penny--;}                
                          //cout<<i<<" ";
                          }
}

//for(i=0;i<n;i++)cout<<v[i]<<" ";

return (k+penny)/100.0;
}

int main()
{ int i,sum;
double c;
while(cin>>n && n)
{
             sum=0;

             for(i=0;i<n;i++)
             {scanf("%lf",&c);
             c*=100;
             v.push_back((int)c);
             sum+=(int)c;
             }
             avg=sum/n;
             penny=sum%n;
             sort(v.begin(),v.end());
             printf("$%0.2lf\n",fn());
             v.clear();
}
return 0;
}
