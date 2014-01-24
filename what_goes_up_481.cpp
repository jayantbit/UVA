#include <vector>
#include<iostream>
#include<cstdio>
using namespace std;

/* longest strictly increasing subsequence. O(n log k) algorithm. */
void find_lis(vector<int> &a, vector<int> &b)
{
     vector<int> p(a.size());
	int u, v,c,i;
    if (a.empty()) return;
    b.push_back(0);

	for ( i = 1; i < a.size(); i++)
        {
                // If next element a[i] is greater than last element of current longest subsequence a[b.back()], just push it at back of "b" and continue
		   if (a[b.back()] < a[i])
                {
			    p[i] = b.back();
			    b.push_back(i);
			    continue;
		        }

                // Binary search to find the smallest element referenced by b which is just bigger than a[i]
                
		   for (u = 0, v = b.size()-1; u < v;)
                {
			    c = (u + v) / 2;
			    if (a[b[c]] < a[i]) u=c+1; else v=c;
		        }

                // Update b if new value is smaller then previously referenced value
		   if (a[i] < a[b[u]])
                {
			     if (u > 0) p[i] = b[u-1];
			     b[u] = i;
		        }
	    }

	for (u = b.size(), v = b.back(); u--; v = p[v]) b[u] = a[v];
}


int main()
{
int i,n;
vector<int> a,lis;                            
while(cin>>n)a.push_back(n);        
        
find_lis(a, lis);

printf("%d\n-\n",lis.size());
for (i = 0; i < lis.size(); i++)printf("%d\n", lis[i]);
 
//getchar();
	return 0;
}
