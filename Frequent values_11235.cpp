#include<iostream>
using namespace std;
#include<math.h>


int freq[200001]={0};

template<class T>
class SegmentTree
{
     int *A,size;
     public:
     SegmentTree(int N)
     {
          int x = (int)(ceil(log2(N)))+1;
          size = 2*(int)pow(2,x);
          A = new int[size];
          memset(A,-1,sizeof(A));
          memset(freq,0,sizeof(freq));
     }
     void initialize(int node, int start,
                         int end, T *array)
     {   

          if (start==end)
            { A[node] = ++freq[array[start]+100000];
            cout<<node<<" "<<A[node]<<endl;
            }
          else
          {
              int mid = (start+end)/2;
              initialize(2*node,start,mid,array);
              initialize(2*node+1,mid+1,end,array);
              A[node] = max(A[2 * node],A[2 * node + 1]);
              cout<<2*node<<" "<<2*node+1<<" "<<A[node]<<endl;
          }
     }
     int query(int node, int start,
                   int end, int i, int j, T *array)
     {
         int id1,id2;
         if (i>end || j<start)
            return -1;
                       cout<<node<<endl;
         if (start>=i && end<=j)
            return A[node];

         int mid = (start+end)/2;
         id1 = query(2*node,start,mid,i,j,array);
         id2 = query(2*node+1,mid+1,end,i,j,array);
         return max(id1,id2);
     }
};

int main()
{
    int i,j,N;
    int A[1000];
    scanf("%d",&N);
    for (i=0;i<N;i++)
        scanf("%d",&A[i]);

    SegmentTree<int> s(N);
    s.initialize(1,0,N-1,A);
  while (scanf("%d%d",&i,&j)!=EOF)printf("%d\n",s.query(1,0,N-1,i-1,j-1,A));
}
