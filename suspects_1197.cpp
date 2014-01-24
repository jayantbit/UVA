using namespace std;
#include<vector>
#include<iostream>
#include<cstdio>
#include<stack>
 
 
vector <int> root(500+1);
 
 
int find(int i)
{
    if(root[i]==i)return i;
    return find(root[i]);
}
 
int combine(int i ,int j)
{
if(i>j)swap(i,j);
i=find(i);
j=find(j);
if(i!=j)root[i]=j;
return i==j;
}   
 
 
 
int main()
{
    int n,m,k;
    while(cin>>n>>m)
    {
         int i,j,num,gf;
         vector <int> g[m+1];
         vector <int> cont[n+1];
        
         stack <int> st;
         int gp,ele;
         vector <int> temp;
         for(i=0;i<m;i++)
         {
                cin>>k;
                for(j=0;j<k;j++)
                {
                cin>>num;
                g[i].push_back(num);
                cont[num].push_back(i);
                }
                root[i]=i;
         }
         gf=cont[0][0];
         st.push(0);
         while(!st.empty())
         { ele=st.top();
             st.pop();
         for(i=0;i<cont[ele].size();i++)
         {
                                       gp=cont[ele][i];
                                       if(combine(gf,gp))
                                       {
                                       temp=g[gp]; 
                                       for(j=0;j<temp.size();j++)st.push(temp[j]);
                                       }
         }
         } 
    }
    system("pause");
    return 0;
}                              
    
