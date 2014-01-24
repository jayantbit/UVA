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

/*
 First, sort the elephants based on their decreasing IQ, then apply LIS based on their increasing weight to these elephants
*/

bool fn(ele a,ele b)
{
if(b.iq<=a.iq)return true;
return false;
}

void find_lis(vector<ele> a)
{
     vector<int> p(a.size()),b;
	int u, v,c,i;
    if (a.empty()) return;
    b.push_back(0);

	for ( i = 1; i < a.size(); i++)
        {
                // If next element a[i] is greater than last element of current longest subsequence a[b.back()], just push it at back of "b" and continue
		   if (a[b.back()].w < a[i].w)
                {
			    p[i] = b.back();
			    b.push_back(i);
			    continue;
		        }

                // Binary search to find the smallest element referenced by b which is just bigger than a[i]
                
		   for (u = 0, v = b.size()-1; u < v;)
                {
			    c = (u + v) / 2;
			    if (a[b[c]].w < a[i].w) u=c+1; else v=c;
		        }

                // Update b if new value is smaller then previously referenced value
		   if (a[i].w< a[b[u]].w)
                {
			     if (u > 0) p[i] = b[u-1];
			     b[u] = i;
		        }
	    }

	c=u=b.size();
	cout<<u<<endl;
    for (v = b.back(); u--; v = p[v])b[u]=a[v].id;
    
    for(i=0;i<c;i++)cout<<b[i]<<endl;

    
}


int main()
{
int i=0,j;
while(cin>>temp.w>>temp.iq)

{temp.id=++i;
v.push_back(temp);
}
sort(v.begin(),v.end(),fn);


find_lis(v);



return 0;
}
